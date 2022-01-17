#include <iostream>

using namespace std;

const int MAX = 10;

bool eh_simetrica(int mat[][MAX], int n);
void le_matriz(int mat[][MAX], int n);

int main()
{
    int A[MAX][MAX], n;
    cin >> n;
    le_matriz(A, n);
    if(eh_simetrica(A, n)){
        cout << "A matriz e simetrica";
    }
    else{
        cout << "A matriz nao e simetrica";
    }
    return 0;
}

bool eh_simetrica(int mat[][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(mat[i][j] != mat[j][i]){
                return false;
            }
        }
    }
    return true;
}

void le_matriz(int mat[][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
}