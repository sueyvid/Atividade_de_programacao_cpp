#include <iostream>

using namespace std;

const int MAX = 10;

bool eh_soma(int ordem, int n_colunas);
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
    int i, j, linhas = 0, colunas = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(mat[i][j] == 1){
                linhas++;
                colunas+=j+1;
            }
            else if(mat[i][j] != 0){
                return false;
            }
        }
        if(linhas > i+1){
            return false;
        }
        linhas = 0;
    }
    if(eh_soma(n, colunas)){
        return true;
    }
    else{
        return false;
    }
}

bool eh_soma(int ordem, int n_colunas){
    int i, soma = 0;
    for(i = 0; i < ordem; i++){
        soma += i+1;
    }
    if(soma == n_colunas){
        return true;
    }
    else{
        return false;
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