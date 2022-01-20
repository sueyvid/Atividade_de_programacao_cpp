#include <iostream>

using namespace std;

const int MAX = 10;

void le_matriz(int mat[MAX][MAX], int m, int n);
void conta_nao_decrescentes(int mat[MAX][MAX], int m, int n, int &lo, int &co);

int main()
{
    int m, n, A[MAX][MAX];
    cin >> m >> n;

    le_matriz(A, m, n);
    
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

void conta_nao_decrescentes(int mat[MAX][MAX], int m, int n, int &lo, int &co){
    
}