#include <iostream>

using namespace std;

const int MAX = 20;

struct Imagem{
    int largura;
    int altura;
    int cor[MAX][MAX];
};

void le_matriz(Imagem &A){
    int i, j;
    cin >> A.largura;
    cin >> A.altura;
    for(i = 0; i < A.altura; i++){
        for(j = 0; j < A.largura; j++){
            cin >> A.cor[i][j];
        }
    }
}

void imprime_matriz(Imagem A){
    int i, j;
    for(i = 0; i < A.altura; i++){
        for(j = 0; j < A.largura; j++){
            cout << A.cor[i][j] << " ";
        }
        cout << endl;
    }
}

Imagem inversao_vertical(Imagem A){
    int i, j;
    Imagem B;
    B.largura = A.largura;
    B.altura = A.altura;
    for(i = 0; i < B.altura; i++){
        for(j = 0; j < B.largura; j++){
            B.cor[i][j] = A.cor[A.altura-i-1][j];
        }
    }
    return B;
}

int main()
{
    Imagem A, B;
    le_matriz(A);
    B = inversao_vertical(A);
    cout << "Imagem resultante:" << endl;
    imprime_matriz(B);

    return 0;
}