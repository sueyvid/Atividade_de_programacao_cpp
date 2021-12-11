#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool eh_triangulo, eh_equilatero, eh_isosceles, eh_escaleno;
    cin >> a >> b >> c;
    eh_triangulo = a < b+c && b < c+a && c < a+b;
    eh_equilatero = a == b && b == c && c == a;
    eh_isosceles = (a == b && a != c) || (b == c && b != a) || (c == a && c != b);
    eh_escaleno = a != b && b != c && c != a;
    
    cout << a << " " << b << " " << c << ": ";
    if(eh_triangulo){
        cout << "Numeros formam triangulo ";
        if(eh_equilatero){
            cout << "equilatero";
        }
        else if(eh_isosceles){
            cout << "isoceles";
        }
        else if(eh_escaleno){
            cout << "escaleno";
        }
    }
    else{
        cout << "Numeros nao formam triangulo";
    }
    return 0;
}