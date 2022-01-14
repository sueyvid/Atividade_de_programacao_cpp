#include <iostream>

using namespace std;

const int MAX = 10;

void mat_identidade(int mat[][MAX], int n);
void le_mat(int mat[][MAX], int n_linhas, int n_colunas);
void imprime_mat(int mat[][MAX], int n_linhas, int n_colunas);

int main()
{
    int A[MAX][MAX], ordem;
    cin >> ordem;
    mat_identidade(A, ordem);
    imprime_mat(A, ordem, ordem);
    return 0;
}

void mat_identidade(int mat[][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }
}

void le_mat(int mat[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++){
        for(j = 0; j < n_colunas; j++){
            cin >> mat[i][j];
        }
    }
}

void imprime_mat(int mat[][MAX], int n_linhas, int n_colunas){
    int i, j;
    for(i = 0; i < n_linhas; i++){
        for(j = 0; j < n_colunas; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}