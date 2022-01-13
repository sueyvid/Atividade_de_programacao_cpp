#include <iostream>

using namespace std;

const int MAX = 10;

void le_mat(int mat[][MAX], int nl, int nc);
int maior(int A[][MAX], int B[][MAX], int nl, int nc);

int main()
{
    int nl, nc;
    int m1[MAX][MAX], m2[MAX][MAX];
    cout << "tamanho da matriz" << endl;
    cin >> nl >> nc;
    
    cout << "digite os valores da matriz:" << endl;
    le_mat(m1, nl, nc);
    le_mat(m2, nl, nc);
    
    cout << "resultado: " << endl;
    cout << maior(m1, m2, nl, nc);
    
    return 0;
}

int maior(int A[][MAX], int B[][MAX], int nl, int nc){
    int i, j, maior_num = A[0][0];
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            if(A[i][j] > B[i][j]){
                maior_num = A[i][j];
            }
            if(A[i][j] < B[i][j]){
                maior_num = B[i][j];
            }
        }
    }
    return maior_num;
}

void le_mat(int mat[][MAX], int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            cin >> mat[i][j];
        }
    }
}