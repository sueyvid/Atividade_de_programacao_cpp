#include <iostream>

using namespace std;

const int MAX = 10;

void matrizidentidade(int I[MAX][MAX], int n);

int main()
{
    int A[MAX][MAX], n, i, j;
    cin >> n;
    matrizidentidade(A, n);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void matrizidentidade(int I[MAX][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                I[i][j] = 1;
            }
            else{
                I[i][j] = 0;
            }
        }
    }
}