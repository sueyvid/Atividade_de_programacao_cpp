#include <iostream>
#include <cmath>

using namespace std;

float A_ret(float b, float h);
float A_tri(float b, float h);
float A_circ(float R);

int main(){
    float base, altura, raio;
    
    cout << "Indique a base:" << endl;
    cin >> base;
    cout << "Indique a altura:" << endl;
    cin >> altura;
    cout << "Indique o raio:" << endl;
    cin >> raio;
    
    cout << "Area do retangulo: " << A_ret(base,altura) << endl
         << "Area do triangulo: " << A_tri(base,altura) << endl
         << "Area do circulo: " << A_circ(raio) << endl;
    return 0;
}

float A_ret(float b, float h){
    return b*h;
}

float A_tri(float b, float h){
    return b*h/2;
}

float A_circ(float R){
    return M_PI*pow(R,2);
}