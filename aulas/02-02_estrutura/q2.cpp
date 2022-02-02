#include <iostream>

using namespace std;

const int MAX = 10;

struct Matriz{
    int nl;
    int nc;
    int mat[MAX][MAX];
};

void le_matriz(Matriz &a){
    int i, j;
    for(i = 0; i < a.nl; i++){
        for(j = 0; j < a.nc; j++){
            cin >> a.mat[i][j];
        }
    }
}

Matriz soma_matricial(Matriz a, Matriz b){
    int i, j;
    Matriz c;
    c.nl = a.nl;
    c.nc = a.nc;
    for(i = 0; i < a.nl; i++){
        for(j = 0; j < a.nc; j++){
            c.mat[i][j] = a.mat[i][j] + b.mat[i][j];
        }
    }
    return c;
}

void imprime_matriz(Matriz c){
    int i, j;
    for(i = 0; i < c.nl; i++){
        for(j = 0; j < c.nc; j++){
            cout << c.mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int nl, nc;
    Matriz a, b, c;
    cout << "Digite o tamanho da matriz:" << endl;
    cin >> a.nl >> a.nc;
    b.nl = a.nl;
    b.nc = a.nc;
    cout << "Digite os valores de m1:" << endl;
    le_matriz(a);
    cout << "Digite os valores de m2:" << endl;
    le_matriz(b);
    
    soma_matricial(a, b);
    
    cout << "Matriz calculada:" << endl;
    imprime_matriz(c);

    return 0;
}