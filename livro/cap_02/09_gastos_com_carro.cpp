#include <iostream>

using namespace std;

int main()
{
    float km_dia, custo_litro, km_litro, estacionar_dia, pedagio_dia, result;
    
    cout << "Total de kilometros dirigidos por dia:" << endl;
    cin >> km_dia;
    cout << "Custo por litro de combustivel:" << endl;
    cin >> custo_litro;
    cout << "Media de kilometros por litro:" << endl;
    cin >> km_litro;
    cout << "Preco de estacionamento por dia:" << endl;
    cin >> estacionar_dia;
    cout << "Gastos diarios com pedagios:" << endl;
    cin >> pedagio_dia;
    
    result = (km_dia*custo_litro/km_litro) + estacionar_dia + pedagio_dia;
    
    cout << "Gasto total: " << result << " dinheiros" << endl;
    
    // km dirigido * custo do litro / kilometro por litro
    // 10 * 7 / 2
    // 5 litros * 7 reais == 35 reais
    // 35 + estacionamento + pedagio
    
    return 0;
}