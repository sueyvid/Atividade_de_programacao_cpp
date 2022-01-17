#include <iostream>

using namespace std;

void le_vet(int v[], int n);
void imprime_vet(int v[], int n);

int main()
{
    int tam;
    cout << "Digite o tamanho do vetor:" << endl;
    cin >> tam;
    int v[tam];
    
    cout << "Digite o vetor:" << endl;
    le_vet(v, tam);
    cout << "Vetor resultante:" << endl;
    imprime_vet(v, tam);
    return 0;
}

void le_vet(int v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
}

void imprime_vet(int v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}