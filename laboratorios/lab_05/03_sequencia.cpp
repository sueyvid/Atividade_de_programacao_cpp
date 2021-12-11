#include <iostream>

using namespace std;

void sequencia(int p, int q, int n, int &menor, int &maior);

int main()
{
    int primeiro, segundo, x, x_menor, x_maior;
    cin >> primeiro >> segundo >> x;
    sequencia(primeiro, segundo, x, x_menor, x_maior);
    cout << "Menor: " << x_menor << endl;
    cout << "Maior: " << x_maior;
    
    return 0;
}

void sequencia(int p, int q, int n, int &menor, int &maior){
    int i, termo, termo_ant, novo;
    
    termo_ant = p;
    termo = q;
    
    if(termo > termo_ant){
        maior = termo;
    }
    else{
        menor = termo;
        maior = termo_ant;
    }
    
    for(i = 3; i <= n; i++){
        novo = termo_ant - 2*termo;
        if(novo >= termo){
            maior = novo;
        }
        if(novo <= termo){
            menor = novo;
        }
        termo_ant = termo;
        termo = novo;
    }
}