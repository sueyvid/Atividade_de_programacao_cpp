#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float R, d, c, a;
    
    cin >> R;
    
    d = R*2;
    c = 2*M_PI*R;
    a = M_PI*pow(R,2);
    
    cout << "Diametro: " << d << endl
         << "Cincunferencia: " << c << endl
         << "Area: " << a << endl;
    return 0;
}