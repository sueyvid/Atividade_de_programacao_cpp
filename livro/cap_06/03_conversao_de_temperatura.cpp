#include <iostream>

using namespace std;

float retorna_temp_celsius(float f);
void calcula_temp_celsius(float f, float &c);

int main()
{
    float temp_c, temp_f;
    cout << "Informe a temperatura em Fahrenheit:" << endl;
    cin >> temp_f;
    
    calcula_temp_celsius(temp_f, temp_c);
    cout << "temperatura em celsius: " << retorna_temp_celsius(temp_f) << " ºC" << endl;
    cout << "temperatura em celsius: " << temp_c << " ºC" << endl;
    return 0;
}

float retorna_temp_celsius(float f){
    return (5/9.0)*(f-32.0);
}

void calcula_temp_celsius(float f, float &c){
    c = (5/9.0)*(f-32.0);
}