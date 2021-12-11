#include <iostream>

using namespace std;

void converte_temp(float tf, float &tc, float & tk);

int main()
{
    float n, celcius, kelvin;
    cin >> n;
    converte_temp(n, celcius, kelvin);
    cout << "Temperatura em celcius: " << celcius << endl;
    cout << "Temperatura em kelvin: " << kelvin;

    return 0;
}

void converte_temp(float tf, float &tc, float & tk){
    tc = 0;
    tk = 0;
    
    tc = (tf-32)/1.8;
    tk = tc + 273.15;
}