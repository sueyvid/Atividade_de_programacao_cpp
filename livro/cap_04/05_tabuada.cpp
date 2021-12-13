#include <iostream>

using namespace std;

int main()
{
    int x, i;
    
    cout << "Insira um numero inteiro" << endl;
    cin >> x;
    
    for(i = 1; i <= 10; i++){
        cout << x << " * " << i << " = " << x*i << endl;
    }
    
    return 0;
}