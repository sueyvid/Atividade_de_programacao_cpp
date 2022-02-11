#include <iostream>

using namespace std;

const int MAX = 10;

struct Imagem{
    int altura;
    int largura;
    int cor[MAX][MAX];
};

void le_matriz(Imagem &A){
    int i, j;
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

Imagem imagem_transposta(Imagem A){
    int i, j;
    Imagem B;
    B.altura = A.largura;
    B.largura = A.altura;
    
    for(i = 0; i < B.altura; i++){
        for(j = 0; j < B.largura; j++){
            B.cor[i][j] = A.cor[j][i];
        }
    }
    return B;
}

Imagem rot_horizontal(Imagem A){
    int i, j;
    Imagem B;
    B = A;
    for(i = 0; i < B.altura; i++){
        for(j = 0; j < B.largura; j++){
            B.cor[i][j] = A.cor[i][B.largura-j-1];
        }
    }
    return B;
}

Imagem rot_90_hor(Imagem A){
    int i, j;
    Imagem B;
    
    B = imagem_transposta(A);
    B = rot_horizontal(B);
    
    return B;
}

int main()
{
    Imagem A, B;
    cout << "Digite o tamanho da imagem:" << endl;
    cin >> A.altura >> A.largura;
    
    cout << "Digite as cores da Imagem em cada posição da matriz:" << endl;
    le_matriz(A);
    B = rot_90_hor(A);
    cout << "Imagem rotacionada 90 graus no sentido horário:" << endl;
    imprime_matriz(B);

    return 0;
}