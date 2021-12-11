#include <iostream>
#include <cmath>

using namespace std;

void le_vet(float v1[], int n);
void imprime_vet(float v1[], int n);
float prod_int(float v1[], float v2[], float v3[], int n);

int main()
{
    int tam;
    cin >> tam;
    float u1[tam], u2[tam], u3[tam];
    le_vet(u1, tam);
    le_vet(u2, tam);
    cout << "Produto interno: " << prod_int(u1, u2, u3, tam) << endl;
    cout << "Norma de v1: " << sqrt(prod_int(u1, u1, u3, tam)) << endl;
    cout << "Norma de v2: " << sqrt(prod_int(u2, u2, u3, tam)) << endl;

    return 0;
}

float prod_int(float v1[], float v2[], float v3[], int n){
    float aux = 0;
    int i;
    for(i = 0; i < n; i++){
        v3[i] = v1[i]*v2[i];
        aux += v3[i];
    }
    return aux;
}

void le_vet(float v1[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin >> v1[i];
    }
}

void imprime_vet(float v1[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << v1[i];
    }
}