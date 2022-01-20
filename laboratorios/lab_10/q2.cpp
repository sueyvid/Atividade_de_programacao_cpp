#include <iostream>

using namespace std;

const int MAX = 10;

void le_matriz(float mat[MAX][MAX], int n);
bool eh_triangular_superior(float mat[MAX][MAX], int n);

int main()
{
    int n;
    float A[MAX][MAX];
    cin >> n;
    le_matriz(A, n);
    
    if(eh_triangular_superior(A, n)){
        cout << "A matriz é triangular superior";
    }
    else{
        cout << "A matriz não é triangular superior";
    }
    
    return 0;
}

void le_matriz(float mat[MAX][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
}

bool eh_triangular_superior(float mat[MAX][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i > j && mat[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}