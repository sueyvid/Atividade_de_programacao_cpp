#include <iostream>

using namespace std;

const int MAX = 10;
int main()
{
    int L, C, i, j, cont = 0;
    cin >> L >> C;
    char A[MAX][MAX];
    bool let_minuscula;
    
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            cin >> A[i][j];
        }
    }
    
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            let_minuscula = A[i][j] > 'a' && A[i][j] < 'z';
            if(!let_minuscula){
                cont++;
            }
        }
    }
    
    cout << cont << " nao sao letras minusculas";
    
    return 0;
}