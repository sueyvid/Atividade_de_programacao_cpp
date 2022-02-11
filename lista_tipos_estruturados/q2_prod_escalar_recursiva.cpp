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
int prod_escalar(int v1[], int v2[], int n);
Matriz matriz_transposta(Matriz A);
Matriz prod_matricial(Matriz A, Matriz B);
void imprime_matriz(Matriz A);

int main()
{
    Matriz A, B, C;
    
    le_matriz(A);
    le_matriz(B);
    
    C = prod_matricial(A, B);
    
    imprime_matriz(C);
    
    return 0;
}

void le_matriz(Matriz &A){
    int i, j;
    cout << "Digite o tamanho da matriz:" << endl;
    cin >> A.nl >> A.nc;
    cout << "Digite a matriz:" << endl;
    for(i = 0; i < A.nl; i++){
        for(j = 0; j < A.nc; j++){
            cin >> A.m[i][j];
        }
    }
}

int prod_escalar(int v1[], int v2[], int n){
    if(n == 0){
        return 0;
    }
    else{
        return v1[n-1]*v2[n-1] + prod_escalar(v1, v2, n-1);
    }
}

Matriz matriz_transposta(Matriz A){
    int i, j;
    Matriz aux;
    aux.nl = A.nc;
    aux.nc = A.nl;
    for(i = 0; i < A.nl; i++){
        for(j = 0; j < A.nc; j++){
            aux.m[j][i] = A.m[i][j];
        }
    }
    return aux;
}

Matriz prod_matricial(Matriz A, Matriz B){
    int i, j, np;
    Matriz C, aux;
    C.nl = A.nl;
    C.nc = B.nc;
    aux = matriz_transposta(B);
    
    if(A.nc != B.nl){
        exit(0);
    }
    
    for(i = 0; i < C.nl; i++){
        for(j = 0; j < C.nc; j++){
            C.m[i][j] = prod_escalar(A.m[i], aux.m[j], A.nc);
        }
    }
    
    return C;
}

void imprime_matriz(Matriz A){
    int i, j;
    cout << "Resultado:" << endl;
    for(i = 0; i < A.nl; i++){
        for(j = 0; j < A.nc; j++){
            cout << A.m[i][j] << " ";
        }
        cout << endl;
    }
}