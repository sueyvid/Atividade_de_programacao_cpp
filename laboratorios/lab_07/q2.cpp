#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int v[n];
    bool ordenado, invalido;
    
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    
    ordenado = true;
    invalido = false;
    for(i = 0; i < n; i++){
        if(v[i] < v[i-1] && i != 0){
            ordenado = false;
        }
        if(v[i] > 9 || v[i] < 0){
            invalido = true;
        }
    }
    
    if(invalido){
        cout << "Vetor invalido";
    }
    else{
        if(ordenado){
            cout << "Vetor esta ordenado";
        }
        else{
            cout << "Vetor nao esta ordenado";
        }
    }
    
    
    return 0;
}