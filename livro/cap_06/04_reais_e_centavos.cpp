#include <iostream>

using namespace std;

void dinheiro(float valor, int &real, float &centavo);

int main()
{
    float valor, c;
    int r;
    cout << "Informe uma quantia em dinheiro:" << endl;
    cin >> valor;
    
    dinheiro(valor, r, c);
    cout << r << " reais e " << c << " centavos";
    return 0;
}

void dinheiro(float valor, int &real, float &centavo){
    real = valor;
    centavo = (valor-real)*100;
}