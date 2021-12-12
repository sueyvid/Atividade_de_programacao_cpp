#include <iostream>

using namespace std;

int modulo(int x);

int main(){
    int n;
    
    cin >> n;
    
    cout << modulo(n);
    return 0;
}

int modulo(int x){
    if(x < 0)
    return x*(-1);
    else
    return x;
}