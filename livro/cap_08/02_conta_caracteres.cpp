#include <iostream>

using namespace std;

void le_vet(char v[], int n);
int conta_caractere(char v[], int n, char carac);

int main()
{
    int tam;
    char carac;
    
    cout << "Digite o tamanho do vetor:" << endl;
    cin >> tam;
    cout << "Digite o caractere que deseja encontrar" << endl;
    cin >> carac;
    
    char v[tam];
    
    cout << "Digite o vetor:" << endl;
    le_vet(v, tam);
    
    cout << "resultado:" << endl << conta_caractere(v, tam, carac) << " caractere(s)";
    
    return 0;
}

void le_vet(char v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
}

int conta_caractere(char v[], int n, char carac){
    int i, cont = 0;
    for(i = 0; i < n; i++){
        if(v[i] == carac){
            cont++;
        }
    }
    return cont;
}