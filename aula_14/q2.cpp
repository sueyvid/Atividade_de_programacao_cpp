#include <iostream>

using namespace std;

void le_vet(int v1[], int n);
void imprime_vet(int v1[], int n);
void conjunto(int v1[], int v2[], int n, int &k);

int main()
{
    int tam, tam_2;
    cin >> tam;
    int u1[tam], u2[tam];
    le_vet(u1, tam);
    conjunto(u1, u2, tam, tam_2);
    imprime_vet(u2, tam_2);
    
    return 0;
}

void conjunto(int v1[], int v2[], int n, int &k){
    int i, j, cont = 0;
    k = 1;
    v2[0] = v1[0];
    for(i = 1; i < n; i++){
        for(j = 0; j < i-1; j++){
            if(v1[i] == v1[j]){
                cont++;
            }
        }
        if(cont == 0){
            v2[k] = v1[i];
            k++;
        }
        cont = 0;
    }
}

void le_vet(int v1[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin >> v1[i];
    }
}

void imprime_vet(int v1[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << v1[i] << " ";
    }
}