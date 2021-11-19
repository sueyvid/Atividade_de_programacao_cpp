#include <iostream>

using namespace std;

void seq_collatz(int x, int &maior, int &cont);

int main()
{
    int num, maior_num, total_termos;
    cout << "Daremos a sequencia da conjectura de Collatz.\n";
    cout << "Digite um numero inteiro positivo:\n";
    cin >> num;
    seq_collatz(num, maior_num, total_termos);
    cout << "maior numero: " << maior_num << endl << "total de termos: " << total_termos << endl;

    return 0;
}

void seq_collatz(int x, int &maior, int &cont){
    int termo_atual = x;
    maior = x; //maior deve começar com x pois se começar com 0, o caso igual a 1 dá maior igual a 0.
    cont = 1; // deve começar com 1, pois o total de termos conta com o primeiro termo.
    
    while(termo_atual != 1){
        if(termo_atual % 2 == 0){
            termo_atual = termo_atual/2;
        }
        else{
            termo_atual = 3*termo_atual + 1;
        }
        if(termo_atual > maior){
            maior = termo_atual;
        }
        cont++;
    }
}