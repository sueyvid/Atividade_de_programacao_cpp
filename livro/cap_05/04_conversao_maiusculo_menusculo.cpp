#include <iostream>

using namespace std;

char muda_tamanho(char n);

int main()
{
    char carac;
    
    cout << "Informe uma letra:" << endl;
    cin >> carac;
    
    cout << "Conversao:" << endl;
    cout << muda_tamanho(carac);
    
    return 0;
}

char muda_tamanho(char n){
    if(n >= 'a' && n <= 'z'){
        return n - ('a' - 'A');
    }
    else{
        return n + ('a' - 'A'); 
    }
}