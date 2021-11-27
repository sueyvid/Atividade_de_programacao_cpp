#include <iostream>

using namespace std;

int soma_dos_digitos(int n);

int main()
{
    int x;
    cin >> x;
    cout << soma_dos_digitos(x);
    return 0;
}

int soma_dos_digitos(int n){
    int termo;
    if(n == 0){
        return 0;
    }
    else{
        termo = n%10;
        return termo+soma_dos_digitos(n/10);
    }
    // 2456 = 2+4+5+6 = 17
    // f(2456) = f(n/10)+termo = f(2456/10)+6 = f(245)+6 = 11 + 6 = 17
    // f(245) = f(n/10)+termo = f(245/10)+5 = f(24)+5 = 6 + 5 = 11
    // f(24) = f(n/10)+termo = f(24/10)+4 = f(2)+4 = 2 + 4 = 6
    // f(2) = f(n/10)+termo = f(2/10)+2 = f(0)+2 = 0 + 2 = 2
    // f(0) = 0
}