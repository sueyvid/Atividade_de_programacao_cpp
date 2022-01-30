#include <iostream>

using namespace std;

const int MAX = 10;

void primeirosImpares(int A[][MAX], int nl, int nc);

int main()
{
    int A[MAX][MAX], nl, nc, i, j;
    
    cout << "Informe o número de linhas da matriz:" << endl;
    cin >> nl;
    cout << "Informe o número de colunas da matriz:" << endl;
    cin >> nc;
    
    primeirosImpares(A, nl, nc);
    
    cout << "Matriz resultante:" << endl;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void primeirosImpares(int A[][MAX], int nl, int nc){
    int i, j, n = 1;
    for(j = 0; j < nc; j++){
        for(i = 0; i < nl; i++){
            A[i][j] = n;
            n+=2;
        }
    }
}