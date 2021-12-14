#include <iostream>

using namespace std;

int main()
{
    float saldo_inicial, debitos, creditos, limite_credito_autorizado;
    
    saldo_inicial = 500;
    debitos = 100;
    creditos = 200;
    limite_credito_autorizado = saldo_inicial - debitos - creditos;
    
    cout << "Numero da conta: xxx-xxx-xxx" << endl
         << "Saldo no inicio do mes: " << saldo_inicial << " conto" << endl
         << "Total de debitos no mes: " << debitos << " conto" << endl
         << "Total de creditos aplicados à conta no mes: " << creditos << " conto" << endl
         << "Limite de credita autorizado: " << limite_credito_autorizado << " conto" << endl;
    
    return 0;
}