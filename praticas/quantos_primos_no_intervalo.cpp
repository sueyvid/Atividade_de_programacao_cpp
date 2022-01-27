#include <iostream>

using namespace std;

int primos(int a, int b);

int main()
{
    int i, f;
    cin >> i >> f;
    cout << primos(i, f);
    
    return 0;
}

int primos(int a, int b){
    int i, j, k = 0, cont = 0;
    for(i = a; i <= b; i++){
        for(j = 1; j <= i; j++){
            if(i%j == 0){
                cont++;
            }
        }
        if(cont == 2){
            k++;
        }
        cont = 0;
    }
    return k;
}