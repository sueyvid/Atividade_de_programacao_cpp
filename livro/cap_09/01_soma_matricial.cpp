#include <iostream>

using namespace std;

const int tam = 2;
void le_matriz(int A[][tam], int n);
void soma_matricial(int A[][tam], int B[][tam], int soma[][tam], int n);
void imprime_matriz(int A[][tam], int n);

int main()
{
    int m1[tam][tam], m2[tam][tam], m3[tam][tam];
    
    le_matriz(m1,tam);
    le_matriz(m2,tam);
    
    soma_matricial(m1,m2,m3,tam);
    
    imprime_matriz(m3,tam);
    
    return 0;
}

void le_matriz(int A[][tam], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
}

void soma_matricial(int A[][tam], int B[][tam], int soma[][tam], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            soma[i][j] = A[i][j] + B[i][j];
        }
    }
}

void imprime_matriz(int A[][tam], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}