/*
    Implemente uma função que receba como parâmetro de entrada um número inteiro
    e que armazene em um parâmetro de saída a quantidade de dígitos primos e em
    outro a quantidade de dígitos não-primos do parâmetro de entrada.
    A função main deve ler do usuário um número inteiro e imprimir na tela
    os resultados computados pela função implementada após a sua chamada.
*/
#include <iostream>

using namespace std;

void quantid_primos(int x, int &primos, int &nao_primos);

int main()
{
    int num, p, np;
    cin >> num;
    quantid_primos(num, p, np);
    cout << p << " digitos primos" << endl;
    cout << np << " digitos nao primos";
    return 0;
}

void quantid_primos(int x, int &primos, int &nao_primos){
    int termo, i, cont;
    primos = 0;
    nao_primos = 0;
    while(x != 0){
        termo = x%10;
        for(i = 1, cont = 0; i <= termo; i++){
            if(termo % i == 0){
                cont++;
            }
        }
        if(cont == 2){
            primos++;
        }
        else{
            nao_primos++;
        }
        x = x/10;
    }
}