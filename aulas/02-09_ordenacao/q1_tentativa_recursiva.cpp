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
    if(i > 0){
        if(v[i].ano > v[j].ano){
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
        }
        ord(v, n, i-1, j);
    }
}

void ord(Carro v[], int n){
    ord(v, n, n-1, n);
}

int main()
{
    int n;
    cout << "Digite a quantidade de carros:" << endl;
    cin >> n;
    cin.ignore();
    Carro v[n];
    
    cout << "Digite o modelo e ano:" << endl;
    //le_vet(v, n);
    ord(v, n);
    cout << "Resultado:" << endl;
    cout << n;
    //imprime_vet(v, n);

    return 0;
}