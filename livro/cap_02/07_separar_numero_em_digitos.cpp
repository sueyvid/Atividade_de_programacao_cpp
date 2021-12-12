#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, i, aux;
    
    cout << "Digite um numero inteiro com 5 digitos: " << endl;
    cin >> n;
    
    aux = n;
    for(i = 5; i > 0; i--){
        while(aux>10){
            aux = aux/10;
        }
        cout << aux << "   ";
        n = n-aux*pow(10, i-1);
        aux = n;
    }
    
    return 0;
}