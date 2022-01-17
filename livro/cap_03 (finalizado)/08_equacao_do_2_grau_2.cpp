#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, delta, x1, x2, r, k, i;
    bool delta_eh_menor_que_zero, delta_eh_zero;
    
    cout << "Digite os valores de a, b e c" << endl;
    cin >> a >> b >> c;
    
    delta = pow(b,2)-4*a*c;
    delta_eh_menor_que_zero = delta < 0;
    delta_eh_zero = delta == 0;
    
    if(delta_eh_menor_que_zero){
        i = sqrt(-1);
        r = -b/2*a;
        k = sqrt(-delta)/2*a;
        
        if(k >= 0){
            cout << "x1 = " << r << " + " << k << "i, x2 = " << r << " - " << k << "i" << endl;
        }
        else{
            k = -k;
            cout << "x1 = " << r << " - " << k << "i, x2 = " << r << " + " << k << "i" << endl;
        }
    }
    else if(delta_eh_zero){
        x1 = (-b+sqrt(delta))/2*a;
        cout << "x = " << x1 << " (duas raizes iguais)" << endl;
    }
    else{
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    
    
    return 0;
}