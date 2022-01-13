#include <iostream>

using namespace std;

const int MAX = 10;
int main()
{
    int N, i, j, cont = 0, linha = 0, coluna = 0, soma = 0;
    cin >> N;
    int A[MAX][MAX];
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(A[i][j] == 1){
                linha++;
                coluna += j+1;
            }
        }
        if(linha > i+1){
            cont++;
        }
    }
    
    for(i = 0; i < N; i++){
        soma += i+1;
    }
    
    if(cont == 0 && linha == N && coluna == soma){
        cout << "A matriz e de permutacao";
    }
    else{
        cout << "A matriz nao e de permutacao";
    }
    
    return 0;
}