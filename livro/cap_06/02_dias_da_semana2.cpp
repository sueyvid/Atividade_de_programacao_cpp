#include <iostream>

using namespace std;

void dias_da_semana(int x);

int main()
{
    int n;
    cin >> n;
    
    dias_da_semana(n);
    
    return 0;
}

void dias_da_semana(int x){
    if(x > 6 || x < 0){
        cout << "numero invalido" << endl;
    }
    if(x == 0){
        cout << "Domingo" << endl;
    }
    if(x == 1){
        cout << "Segunda" << endl;
    }
    if(x == 2){
        cout << "Terça" << endl;
    }
    if(x == 3){
        cout << "Quarta" << endl;
    }
    if(x == 4){
        cout << "Quinta" << endl;
    }
    if(x == 5){
        cout << "Sexta" << endl;
    }
    if(x == 6){
        cout << "Sábado" << endl;
    }
}