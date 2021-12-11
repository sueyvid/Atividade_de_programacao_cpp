#include <iostream>

using namespace std;

long pot(long base, long expoente);

int main()
{
    long a, b;
    cin >> a >> b;
    cout << a << " elevado a " << b << " é " << pot(a,b);
    return 0;
}

long pot(long base, long expoente){
    if(expoente == 1){
        return base;
    }
    else{
        return base * pot(base,expoente-1);
    }
}