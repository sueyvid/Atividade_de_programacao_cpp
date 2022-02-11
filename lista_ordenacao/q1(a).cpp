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

void ord_desc_salario(Funcionario v[], int n){
    Funcionario aux;
    int i, j;
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i].salario < v[j].salario){
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
    ord_desc_salario(v, n);
    cout << "Resultado:" << endl;
    imprime_vet(v, n);

    return 0;
}