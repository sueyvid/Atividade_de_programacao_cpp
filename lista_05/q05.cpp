#include <iostream>

using namespace std;

int divisores(int n);

int main()
{
    int x;
    cin >> x;
    if(divisores(x) == 2){
        cout << "O numero eh primo";
    }
    else{
        cout << "O numero nao eh primo";
    }
    return 0;
}

int divisores(int n){
    int cont = 0;
    if(n == 1){
        cont++;
        return 1;
    }
    else{
        if(n%(n-1) == 0){
            cont++;
        }
        return n/divisores(n-1);
    }
    // 2456 = 2+4+5+6 = 17
    // f(2456) = f(n/10)+termo = f(2456/10)+6 = f(245)+6 = 11 + 6 = 17
    // f(245) = f(n/10)+termo = f(245/10)+5 = f(24)+5 = 6 + 5 = 11
    // f(3) = n/f(n-1) = 3/f(3-1) = 3/f(2) = 3/2 = 2
    // f(2) = n/f(n-1) = 2/f(2-1) = 2/f(1) = 2/1 = 2
    // f(1) = 1
}