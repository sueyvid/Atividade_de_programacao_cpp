#include <iostream>

using namespace std;

const int MAX = 10;
int main()
{
    int N, i, j, cont = 0;
    cin >> N;
    int A[MAX][MAX];
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i == j && A[i][j] == 1){
                cont++;
            }
            if(i != j && A[i][j] != 0){
                cont = 0;
                break;
            }
        }
    }
    
    if(cont == N){
        cout << "E a matriz identidade de ordem " << N;
    }
    else{
        cout << "Nao e a matriz identidade de ordem " << N;
    }
    
    return 0;
}