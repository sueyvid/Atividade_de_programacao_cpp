#include <iostream>

using namespace std;

float f(int n);

int main()
{
    int x;
    cin >> x;
    cout << f(x) << " é o valor";
    return 0;
}

float f(int n){
    if(n == 1){
        return 1/3.0;
    }
    else{
        return (n/(2*n+1.0))+f(n-1);
    }
}