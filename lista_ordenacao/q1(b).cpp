#include <iostream>

using namespace std;

const int SMAX = 21;

struct Funcionario{
    char nome[SMAX];
    int matricula;
    int salario;
};

void le_vet(Funcionario v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin.getline(v[i].nome, SMAX);
        cin >> v[i].matricula;
        cin >> v[i].salario;
        cin.ignore();
    }
}

void imprime_vet(Funcionario v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << v[i].nome << endl;
        cout << v[i].matricula << endl;
        cout << v[i].salario << endl;
    }
}

int strcmp(char v1[], char v2[]){
    int i = 0;
    while(v1[i] != '\0'){
        if(v1[i] != v2[i]){
            return v1[i] - v2[i];
        }
        i++;
    }
    return 0;
}

void ord_alfabet(Funcionario v[], int n){
    Funcionario aux;
    int i, j;
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(strcmp(v[i].nome, v[j].nome) > 0){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Digite a quantidade de funcionários:" << endl;
    cin >> n;
    cin.ignore();
    Funcionario v[n];
    
    cout << "Digite as informações dos funcionário: nome, matricula, salário" << endl;
    le_vet(v, n);
    ord_alfabet(v, n);
    cout << "Resultado:" << endl;
    imprime_vet(v, n);

    return 0;
}