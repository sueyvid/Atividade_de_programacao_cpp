#include <iostream>

using namespace std;

int main()
{
    int ano;
    bool eh_bissexto;
    cin >> ano;
    eh_bissexto = ((ano%4 == 0 && !(ano%100 == 0)) || ano%400 == 0);
    if(eh_bissexto){
        cout << ano << " e um ano bissexto";
    }
    else{
        cout << ano << " nao e um ano bissexto";
    }

    return 0;
}