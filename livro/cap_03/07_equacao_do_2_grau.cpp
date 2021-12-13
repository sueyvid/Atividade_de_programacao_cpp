#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, delta, x1, x2;
    bool sao_raizes_complexas;
    
    cout << "Digite os valores de a, b e c" << endl;
    cin >> a >> b >> c;
    
    delta = pow(b,2)-4*a*c;
    x1 = (-b+sqrt(delta))/2*a;
    x2 = (-b-sqrt(delta))/2*a;
    
    sao_raizes_complexas = delta < 0;
    if(sao_raizes_complexas){
        cout << "Equacao com raizes complexas" << endl;
    }
    else{
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    
    
    return 0;
}