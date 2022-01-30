#include <iostream>

using namespace std;

const int SMAX = 21;

struct Carro{
    char modelo[SMAX];
    int ano_fabric;
};

int main()
{
    int n, i, j, result = 0;
    char escolha[SMAX];
    bool strcmp;
    
    cin >> n;
    Carro carro[n];
    
    for(i = 0; i < n; i++){
        cin.ignore();
        cin.getline(carro[i].modelo, SMAX);
        cin >> carro[i].ano_fabric;
    }
    
    cin.ignore();
    cin.getline(escolha, SMAX);
    
    for(i = 0; i < n; i++){
        strcmp = true;
        for(j = 0; escolha[j] != '\0'; j++){
            if(carro[i].modelo[j] != escolha[j]){
                strcmp = false;
                break;
            }
        }
        if(strcmp){
            cout << "Modelo: " << carro[i].modelo << endl;
            cout << "Ano: " << carro[i].ano_fabric << endl;
            result++;
        }
    }
    
    if(result == 0){
        cout << "Nao ha carros do tipo " << escolha;
    }
    
    return 0;
}