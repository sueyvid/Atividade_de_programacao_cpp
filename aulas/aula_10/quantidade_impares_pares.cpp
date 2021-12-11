#include <iostream>

using namespace std;

void conta_digitos(int x, int &pares, int &impares);

int main()
{
    int num, impar, par;
    cout << "Daremos a quantidade de pares e impares em cada digito.\n";
    cout << "Digite um numero inteiro, positivo:\n";
    cin >> num;
    conta_digitos(num, par, impar);
    cout << "impar: " << impar << endl;
    cout << "par: " << par;
    return 0;
}

void conta_digitos(int x, int &pares, int &impares){
    int termo;
    pares = 0;
    impares = 0;
    while(x != 0){
        termo = x%10;
        x = x/10;
        if(termo%2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }    
}