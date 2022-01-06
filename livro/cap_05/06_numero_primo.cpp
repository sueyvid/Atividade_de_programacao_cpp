#include <iostream>

using namespace std;

bool eh_primo(int num);

int main()
{
    int n, i;
    
    do{
        cout << "Informe um numero positivo (negativo para encerrar):" << endl;
        cin >> n;
        if(n > 0){
            if(eh_primo(n)){
                cout << n << " eh primo" << endl;
            }
            else{
                cout << n << " nao eh primo" << endl;
            }
        }
    }while(n > 0);
    return 0;
}

bool eh_primo(int num){
    int i, cont = 0;
    for(i = 1; i <= num; i++){
        if(num%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        return true;
    }
    else{
        return false;
    }
}