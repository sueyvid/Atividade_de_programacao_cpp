#include <iostream>

using namespace std;

const int MAX = 10;

float media(float v[], int n);

int main()
{
    float v[MAX];
    int n, i;
    
    cout << "Digite o tamanho do vetor:" << endl;
    cin >> n;
    cout << "Digite os valores do vetor:" << endl;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    
    cout << "A média é: " << media(v, n) << endl;
    
    return 0;
}

float media(float v[], int n){
    int i;
    float media = 0;
    for(i = 0; i < n; i++){
        media += v[i];
    }
    return media /= n;
}