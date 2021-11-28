#include <iostream>

using namespace std;

int numeros_pares(int n);

int main()
{
    int x;
    cin >> x;
    cout << x << " possui " << numeros_pares(x) << " digitos pares";

    return 0;
}

int numeros_pares(int n){
    int par = 0, termo;
    if(n == 0){
        return 0;
    }
    else{
        termo = n%10;
        if(termo%2 == 0){
            par++;
        }
        return par + numeros_pares(n/10);
    }
}