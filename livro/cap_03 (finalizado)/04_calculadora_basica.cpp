#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char operacao;
    
    cin >> a >> operacao >> b;
    
    if(operacao == '+')
        cout << a+b;
    if(operacao == '-')
        cout << a-b;
    if(operacao == '*')
        cout << a*b;
    if(operacao == '/')
        cout << a/b;
    return 0;
}