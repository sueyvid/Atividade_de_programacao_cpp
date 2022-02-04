#include <iostream>

using namespace std;

const int MAX = 10;

struct Matriz{
    int n;
    int m[MAX][MAX];
};

void le_matriz(Matriz &A);
bool idempotente(Matriz A);

int main()
{
    Matriz A;
    le_matriz(A);
    if(idempotente(A)){
        cout << "Matriz e idempotente";
    }
    else{
        cout << "Matriz nao e idempotente";
    }
    
    return 0;
}

void le_matriz(Matriz &A){
    int i, j;
    cout << "Digite a ordem da matriz quadrada:" << endl;
    cin >> A.n;
    cout << "Digite a matriz:" << endl;
    for(i = 0; i < A.n; i++){
        for(j = 0; j < A.n; j++){
            cin >> A.m[i][j];
        }
    }
}

bool idempotente(Matriz A){
    int i, j, k;
    Matriz aux;
    aux.n = A.n;
    
    for(i = 0; i < aux.n; i++){
        for(j = 0; j < aux.n; j++){
            aux.m[i][j] = 0;
        }
    }
    
    for(i = 0; i < aux.n; i++){
        for(j = 0; j < aux.n; j++){
            for(k = 0; k < A.n; k++){
                aux.m[i][j] += A.m[i][k] * A.m[k][j];
            }
        }
    }
    
    for(i = 0; i < A.n; i++){
        for(j = 0; j < A.n; j++){
            if(A.m[i][j] != aux.m[i][j]){
                return false;
            }
        }
    }
    
    return true;
}