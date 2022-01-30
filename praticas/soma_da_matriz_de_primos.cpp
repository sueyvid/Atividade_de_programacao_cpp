#include <iostream>

using namespace std;

const int MAX = 10;

void primeirosImpares(int A[][MAX], int nl, int nc);
bool eh_primo(int n);

int main()
{
    int A[MAX][MAX], nl, nc, i, j, tot_l = 0, tot_c = 0;
    
    cout << "Informe o número de linhas da matriz:" << endl;
    cin >> nl;
    cout << "Informe o número de colunas da matriz:" << endl;
    cin >> nc;
    
    int linhas[nl] = {0}, colunas[nc] = {0};
    
    primeirosImpares(A, nl, nc);
    
    cout << "Matriz resultante:" << endl;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            if(A[i][j] == 0){
                cout << "-- ";
            }
            else if(A[i][j] < 10){
                cout << "0";
            }
            if(A[i][j] != 0){
                cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    cout << "\nSoma das linhas:" << endl;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            linhas[i] += A[i][j];
        }
    }
    for(i = 0; i < nl; i++){
        tot_l += linhas[i];
    }
    for(i = 0; i < nl; i++){
        cout << linhas[i] << " ";
    }
    //cout << "= " << tot_l << endl;
    cout << endl;
    
    cout << "\nSoma das colunas:" << endl;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            colunas[j] += A[i][j];
        }
    }
    for(j = 0; j < nc; j++){
        tot_c += colunas[j];
    }
    for(j = 0; j < nc; j++){
        cout << colunas[j] << " ";
    }
    //cout << "= " << tot_c << endl;
    cout << endl;

    return 0;
}

void primeirosImpares(int A[][MAX], int nl, int nc){
    int i, j, n = 1;
    for(j = 0; j < nc; j++){
        for(i = 0; i < nl; i++){
            if(eh_primo(n)){
                A[i][j] = n;
            }
            else{
                A[i][j] = 0;
            }
            n+=2;
        }
    }
    A[0][0] = 2;
}

bool eh_primo(int n){
    int i = 1, cont = 0;
    while(i <= n){
        if(n%i == 0){
            cont++;
        }
        i++;
    }
    return (cont == 2);
}