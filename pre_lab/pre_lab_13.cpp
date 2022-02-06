#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX = 10;

struct Matriz{
    int nl;
    int nc;
    int m[MAX][MAX];
};

void le_matriz(Matriz &A);
Matriz calc_transposta(Matriz A);
int prod_escalar(int v1[], int v2[], int n);
Matriz prod_matricial(Matriz A, Matriz B);
Matriz gera_identidade(int n);
bool compara_matriz(Matriz A, Matriz B);
bool eh_ortogonal(Matriz A);

int main()
{
    Matriz A;
    
    le_matriz(A);
    eh_ortogonal(A);
    if(eh_ortogonal(A)){
        cout << "Matriz é ortogonal";
    }
    else{
        cout << "Matriz não é ortogonal";
    }
    
    return 0;
}

void le_matriz(Matriz &A){
    int i, j;
    cin >> A.nl;
    cin >> A.nc;
    for(i = 0; i < A.nl; i++){
        for(j = 0; j < A.nc; j++){
            cin >> A.m[i][j];
        }
    }
}

Matriz calc_transposta(Matriz A){
    int i, j;
    Matriz mr;
    mr.nl = A.nc;
    mr.nc = A.nl;
    for(i = 0; i < mr.nl; i++){
        for(j = 0; j < mr.nc; j++){
            mr.m[i][j] = A.m[j][i];
        }
    }
    return mr;
}

int prod_escalar(int v1[], int v2[], int n){
    int i, result = 0;
    for(i = 0; i < n; i++){
        result += v1[i]*v2[i];
    }
    return result;
}

Matriz prod_matricial(Matriz A, Matriz B){
    int i, j;
    Matriz Bt, mr;
    mr.nl = A.nl;
    mr.nc = B.nc;
    
    if(A.nc != B.nl){
        exit(0);
    }
    
    Bt = calc_transposta(B);
    
    for(i = 0; i < A.nl; i++){
        for(j = 0; j < Bt.nl; j++){
            mr.m[i][j] = prod_escalar(A.m[i], Bt.m[j], A.nc);
        }
    }
    return mr;
}

Matriz gera_identidade(int n){
    int i, j;
    Matriz mr;
    mr.nl = n;
    mr.nc = n;
    
    for(i = 0; i < mr.nl; i++){
        for(j = 0; j < mr.nc; j++){
            if(i == j){
                mr.m[i][j] = 1;
            }
            else{
                mr.m[i][j] = 0;
            }
        }
    }
    return mr;
}

bool compara_matriz(Matriz A, Matriz B){
    int i, j;
    for(i = 0; i < A.nl; i++){
        for(j = 0; j < A.nc; j++){
            if(A.m[i][j] != B.m[i][j]){
                return false;
            }
        }
    }
    return true;
}

bool eh_ortogonal(Matriz A){
    Matriz At, result, ident;
    
    if(A.nl != A.nc){
        return false;
    }
    
    At = calc_transposta(A);
    result = prod_matricial(A, At);
    ident = gera_identidade(result.nl);
    
    if(!compara_matriz(result, ident)){
        return false;
    }
    return true;
}