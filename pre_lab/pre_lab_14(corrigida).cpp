#include <iostream>

using namespace std;

const int SMAX = 51;

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Pessoa{
    char nome[SMAX];
    Data nasc;
};

void le_vet(Pessoa v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin.getline(v[i].nome, SMAX);
        cin >> v[i].nasc.dia;
        cin >> v[i].nasc.mes;
        cin >> v[i].nasc.ano;
        cin.ignore();
    }
}

void imprime_vet(Pessoa v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << "Nome: " << v[i].nome << endl;
        cout << "Nascimento: " << v[i].nasc.dia
             << "/" << v[i].nasc.mes
             << "/" << v[i].nasc.ano << endl;
    }
}

void ord_idade_cresc(Pessoa v[], int n){
    int i, j;
    Pessoa aux;
    bool troca = false; 
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i].nasc.ano < v[j].nasc.ano){
                troca = true;
            }
            if(v[i].nasc.ano == v[j].nasc.ano){
                if(v[i].nasc.mes < v[j].nasc.mes){
                    troca = true;
                }
                if(v[i].nasc.mes == v[j].nasc.mes){
                    if(v[i].nasc.dia < v[j].nasc.dia){
                        troca = true;
                    }
                }
            }
            if(troca){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                troca = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Pessoa v[n];
    
    le_vet(v, n);
    ord_idade_cresc(v, n);
    imprime_vet(v, n);

    return 0;
}