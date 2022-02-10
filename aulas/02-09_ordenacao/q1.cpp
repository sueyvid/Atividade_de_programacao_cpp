#include <iostream>

using namespace std;

const int SMAX = 21;

struct Carro{
    char modelo[SMAX];
    int ano;
};

void le_vet(Carro v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin.getline(v[i].modelo, SMAX);
        cin >> v[i].ano;
        cin.ignore();
    }
}

void imprime_vet(Carro v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << v[i].modelo << endl;
        cout << v[i].ano << endl;
    }
    cout << endl;
}

void ordena_ano(Carro v[], int n){
    int i, j;
    Carro aux;
    
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i].ano > v[j].ano){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Digite a quantidade de carros:" << endl;
    cin >> n;
    cin.ignore();
    Carro v[n];
    
    cout << "Digite o modelo e ano:" << endl;
    le_vet(v, n);
    ordena_ano(v, n);
    cout << "Resultado:" << endl;
    imprime_vet(v, n);

    return 0;
}