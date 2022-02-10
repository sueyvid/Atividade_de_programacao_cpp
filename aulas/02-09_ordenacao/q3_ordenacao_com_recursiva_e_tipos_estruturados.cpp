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

void ord(Carro v[], int n, int i, int j){
    Carro aux;
    if(i < n-1){
        if(j < n){
            if(v[i].ano > v[j].ano){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            ord(v, n, i, j+1);
        }
        else{
            ord(v, n, i+1, i+2);
        }
    }
}

void ord(Carro v[], int n){
    ord(v, n, 0, 1);
}

int main()
{
    int n;
    cout << "Digite a quantidade de carros:" << endl;
    cin >> n;
    cin.ignore();
    Carro v[n];
    
    cout << "Digite modelo e ano:" << endl;
    le_vet(v, n);
    ord(v, n);
    cout << "Resultado:" << endl;
    imprime_vet(v, n);

    return 0;
}