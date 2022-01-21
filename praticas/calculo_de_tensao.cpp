#include <iostream>
#include <cmath>

using namespace std;

float p(float m);
float cal_a(float peso1, float peso2, float angulo, float massa1, float massa2);
float cal_t(float peso2, float massa2, float aceleracao);
float arrendonda(float result);

int main()
{
    float m1, m2, teta, T, p1, p2, a;
    cout << "Digite o valor de m1" << endl;
    cin >> m1;
    cout << "Digite o valor de m2" << endl;
    cin >> m2;
    cout << "Digite o valor de teta" << endl;
    cin >> teta;
    p1 = p(m1);
    p2 = p(m2);
    a = cal_a(p1, p2, teta, m1, m2);
    T = cal_t(p2, m2, a);
    cout << "T = " << T << " N";
    
    return 0;
}

float p(float m){
    return m*9.8;
}

float cal_a(float peso1, float peso2, float angulo, float massa1, float massa2){
    angulo *= M_PI/180;
    return (peso2 - peso1*sin(angulo))/(massa1+massa2);
}

float cal_t(float peso2, float massa2, float aceleracao){
    return peso2-(massa2*aceleracao);
}