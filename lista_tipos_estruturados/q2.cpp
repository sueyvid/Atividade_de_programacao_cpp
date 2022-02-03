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
Matriz prod_matricial(Matriz A, Matriz B);
void imprime_matriz(Matriz A);

int main()
{
    int i, j;
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

Matriz prod_matricial(Matriz A, Matriz B){
    int i, j, k, np;
    Matriz C;
    C.nl = A.nl;
    C.nc = B.nc;
    np = A.nc;
    
    if(A.nc != B.nl){
        exit(0);
    }
    
    for(i = 0; i < C.nl; i++){
        for(j = 0; j < C.nc; j++){
            C.m[i][j] = 0;
        }
    }
    
    for(i = 0; i < C.nl; i++){
        for(j = 0; j < C.nc; j++){
            for(k = 0; k < np; k++){
                C.m[i][j] += A.m[i][k] * B.m[k][j];
            }
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