#include <iostream>

using namespace std;

int main(){
    float x, pot = 1, fat = 1, som = 0;
    int n, i;
    
    cin >> x >> n;
    
    for(i = 0; i < n; i++){
        pot *= x;
    }
    for(i = 1; i <= x; i++){
        fat *= i;
    }
    for(i = 1; i <= n; i++){
        som += 2*x;
    }
    
    cout << "Potencia x^n: " << pot << endl;
    cout << "Fatorial de x: " << fat << endl;
    cout << "Somatorio de 2x: " << som << endl;
    
    return 0;
}