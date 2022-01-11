#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int semente, n, i, j;
    cin >> semente;
    cin >> n;
    int A[n][n];
    srand(semente);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                A[i][j] = 0;
            }
            if(i < j){
                A[i][j] = (rand()%((-3)-(-5)+1)+(-5));
            }
            if(i > j){
                A[i][j] = (rand()%(5-3+1)+3);
            }
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}