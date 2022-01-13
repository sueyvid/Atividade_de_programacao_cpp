#include <iostream>

using namespace std;

const int MAX = 10;

void le_mat(char mat[][MAX], int nl, int nc);
int conta_carac(char mat[][MAX], int nl, int nc, char carac);
void imprime_mat(char mat[][MAX], int nl, int nc);

int main()
{
    int nl, nc;
    char A[MAX][MAX], carac;
    cout << "Digite o tamanho da matriz" << endl;
    cin >> nl >> nc;
    cout << "Digite o caracter desejado" << endl;
    cin >> carac;
    le_mat(A, nl, nc);
    cout << conta_carac(A, nl, nc, carac) << endl;
    return 0;
}

void le_mat(char mat[][MAX], int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            cin >> mat[i][j];
        }
    }
}

int conta_carac(char mat[][MAX], int nl, int nc, char carac){
    int i, j, cont = 0;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            if(mat[i][j] == carac){
                cont++;
            }
        }
    }
    return cont;
}

void imprime_mat(char mat[][MAX], int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}