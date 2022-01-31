#include <iostream>

using namespace std;

const int MAX = 10;

int maior(int v1[], int v2[], int n);

int main()
{
    int v1[MAX], v2[MAX], i, n;
    
    cout << "Digite o tamanho do vetor:" << endl;
    cin >> n;
    cout << "Digite os valores do vetor 1:" << endl;
    for(i = 0; i < n; i++){
        cin >> v1[i];
    }
    cout << "Digite os valores do vetor 2:" << endl;
    for(i = 0; i < n; i++){
        cin >> v2[i];
    }
    
    cout << "Maior valor: ";
    cout << maior(v1, v2, n) << endl;
    
    return 0;
}

int maior(int v1[], int v2[], int n){
    int i, maior;
    maior = v1[0];
    for(i = 0; i < n; i++){
        if(v1[i] > maior){
            maior = v1[i];
        }
        if(v2[i] > maior){
            maior = v2[i];
        }
    }
    return maior;
}