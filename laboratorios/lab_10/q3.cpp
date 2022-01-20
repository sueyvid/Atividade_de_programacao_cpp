#include <iostream>

using namespace std;

const int MAX = 10;

void le_matriz(int mat[MAX][MAX], int m, int n);
int minMax(int mat[MAX][MAX], int &m, int &n);

int main()
{
    int m, n, A[MAX][MAX];
    cin >> m >> n;
    le_matriz(A, m, n);
    cout << "O MINMAX é " << minMax(A, m, n) << ". Posição [" << m << ", " << n << "]"; 
    
    return 0;
}

void le_matriz(int mat[MAX][MAX], int m, int n){
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
}

int minMax(int mat[MAX][MAX], int &m, int &n){
    int i, j, menor_l, maior_l, linha, coluna;
    
    menor_l = mat[0][0];
    linha = 0;
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(mat[i][j] < menor_l){
                menor_l = mat[i][j];
                linha = i;
            }
        }
    }
    
    maior_l = menor_l;
    
    for(j = 0; j < n; j++){
        if(mat[linha][j] > maior_l){
            maior_l = mat[linha][j];
            coluna = j;
        }
    }
    
    m = ++linha;
    n = ++coluna;
    
    return maior_l;
}