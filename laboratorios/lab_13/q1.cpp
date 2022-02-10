#include <iostream>

using namespace std;

const int SMAX = 51;
const int MAX = 3;

struct Aluno{
    char nome[SMAX];
    int matricula;
    int faltas;
    float nota[MAX];
};

void le_vet(Aluno v[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        cin.getline(v[i].nome, SMAX);
        cin >> v[i].matricula;
        cin >> v[i].faltas;
        for(j = 0; j < MAX; j++){
            cin >> v[i].nota[j];
        }
        cin.ignore();
    }
}

void imprime_vet(Aluno v[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        cout << v[i].matricula << " - " << v[i].nome << endl;
    }
}

void separa_reprovados(Aluno v[], int n, int faltasMAX, Aluno rp[], Aluno nrp[], int &n_rp, int &n_nrp){
    int i;
    n_rp = 0;
    n_nrp = 0;
    for(i = 0; i < n; i++){
        if(v[i].faltas > faltasMAX){
            rp[n_rp] = v[i];
            n_rp++;
        }
        else if(v[i].faltas <= faltasMAX){
            nrp[n_nrp] = v[i];
            n_nrp++;
        }
    }
}

int main()
{
    int n, faltasMAX, n_rp, n_nrp;
    cin >> n;
    cin.ignore();
    Aluno v[n], rp[n], nrp[n];
    
    le_vet(v, n);
    cin >> faltasMAX;
    separa_reprovados(v, n, faltasMAX, rp, nrp, n_rp, n_nrp);
    cout << "Reprovado por falta:" << endl;
    imprime_vet(rp, n_rp);
    cout << "Não reprovado por falta:" << endl;
    imprime_vet(nrp, n_nrp);

    return 0;
}