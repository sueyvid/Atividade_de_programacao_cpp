#include <iostream>

using namespace std;

const int MAX = 10;
const int n = 3;

void le_mat(float mat[][MAX]);
float det(float mat[][MAX]);

int main()
{
    float A[MAX][MAX];
    cout << "Digite a matriz 3x3: " << endl;
    le_mat(A);
    cout << "det de A: " << endl << det(A);
    return 0;
}

void le_mat(float mat[][MAX]){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
}

float det(float mat[][MAX]){
    int i, j, z;
    float det = 0, mult = 1, mat_det[n][n+2];
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n+2; j++){
            if(j < n){
                mat_det[i][j] = mat[i][j];
            }
            else{
                mat_det[i][j] = mat[i][j-n];
            }
        }
    }
    
    for(z = 0; z < n; z++){
        for(i = 0; i < n; i++){
            for(j = 0; j < n+2; j++){
                if(i == j-z){
                    mult *= mat_det[i][j];
                }
            }
        }
        det += mult;
        mult = 1;
    }
    
    for(z = 0; z < n; z++){
        for(i = 0; i < n; i++){
            for(j = 0; j < n+2; j++){
                if(i+j-z == n-1){
                    mult *= mat_det[i][j];
                }
            }
        }
        det -= mult;
        mult = 1;
    }

    return det;
}