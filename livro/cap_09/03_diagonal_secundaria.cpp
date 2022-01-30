#include <iostream>

using namespace std;

const int MAX = 10;

void diagonalSecundaria(int A[][MAX], int n, int x);

int main()
{
    int A[MAX][MAX], n, x, i, j;
    
    cout << "Informe o número de linhas/colunas:" << endl;
    cin >> n;
    cout << "Informe o número a ser inserido na diagonal secundária:" << endl;
    cin >> x;
    
    diagonalSecundaria(A, n, x);
    cout << "Matriz resultante:" << endl;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void diagonalSecundaria(int A[][MAX], int n, int x){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i+j == n-1){
                A[i][j] = x;
            }
            else{
                A[i][j] = 0;
            }
        }
    }
}