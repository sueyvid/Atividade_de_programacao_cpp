#include <iostream>

using namespace std;

const int MAX = 10;

bool eh_permuta(int mat[][MAX], int n);
void le_mat(int mat[][MAX], int n_linhas, int n_colunas);
void imprime_mat(int mat[][MAX], int n_linhas, int n_colunas);

int main()
{
    int A[MAX][MAX], n;
    cout << "Digite a ordem da matriz quadrada:" << endl;
    cin >> n;
    cout << "Digite a matriz:" << endl;
    le_mat(A, n, n);
    if(eh_permuta(A, n)){
        cout << "Matriz informada e de permuta" << endl;
    }
    else{
        cout << "Matriz informada nao e de permuta" << endl;
    }
    return 0;
}

bool eh_permuta(int mat[][MAX], int n){
    int i, j;
    int linhas[n] = {0}, colunas[n] = {0};
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(mat[i][j] == 1){
                linhas[i]++;
                colunas[j]++;
            }
            else if(mat[i][j] != 0){
                return false;
            }
        }
    }
    for(i = 0; i < n; i++){
        if(linhas[i] != 1 || colunas[i] != 1){
            return false;
        }
    }
    return true;
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