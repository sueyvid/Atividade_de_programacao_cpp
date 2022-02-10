#include <iostream>

using namespace std;

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
    cout << endl;
}

void ord(int v[], int n, int i, int j){
    int aux;
    if(i < n-1){
        if(j < n){
            if(v[i] > v[j]){
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

void ord(int v[], int n){
    ord(v, n, 0, 1);
}

int main()
{
    int n;
    cout << "Digite a quantidade de carros:" << endl;
    cin >> n;
    int v[n];
    
    le_vet(v, n);
    ord(v, n);
    imprime_vet(v, n);

    return 0;
}