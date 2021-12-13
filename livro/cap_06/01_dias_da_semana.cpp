/*
    Implemente uma função para imprimir na tela todos os dias da semana. A função main deve
    exibir na tela todos os dias da semana de acordo com uma chamada à função implementada.
*/
#include <iostream>

using namespace std;

void dias_da_semana();

int main()
{
    dias_da_semana();
    
    return 0;
}

void dias_da_semana(){
    cout << "Segunda" << endl
         << "Terça" << endl
         << "Quarta" << endl
         << "Quinta" << endl
         << "Sexta" << endl
         << "Sábado" << endl
         << "Domingo" << endl;
}