#include <iostream>

using namespace std;

const int MAX = 10;

void maior_da_coluna(int mat[][MAX], int nl, int nc, int vet[]);
void imprime_vet(int vet[], int n);
void le_mat(int mat[][MAX], int n_linhas, int n_colunas);
void imprime_mat(int mat[][MAX], int n_linhas, int n_colunas);

int main()
{
    int A[MAX][MAX], nl, nc, v[MAX];
    cout << "Digite o tamanho da matriz nl x nc:" << endl;
    cin >> nl >> nc;
    
    cout << "Digite a matriz:" << endl;
    le_mat(A, nl, nc);
    maior_da_coluna(A, nl, nc, v);
    cout << "vetor resultante:" << endl;
    imprime_vet(v, nc);
    return 0;
}

void maior_da_coluna(int mat[][MAX], int nl, int nc, int vet[]){
    int i, j;
    for(i = 0; i < nc; i++){
        vet[i] = mat[0][i];
    }
    
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            if(mat[i][j] > vet[j]){
                vet[j] = mat[i][j];
            }
        }
    }
}

void imprime_vet(int vet[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << vet[i] << " ";
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