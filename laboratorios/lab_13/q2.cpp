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

void imprime_aluno(Aluno v[], int ind){
    int i;
    cout << "Nome: " << v[ind].nome << endl;
    cout << "Matricula: " << v[ind].matricula << endl;
    cout << "Faltas: " << v[ind].faltas << endl;
    cout << "Notas: ";
    for(i = 0; i < MAX; i++){
        cout << v[ind].nota[i];
        if(i < MAX-1){
            cout << ", ";
        }
    }
}

int pesquisa_matricula(Aluno v[], int n, int matricula){
    int i;
    for(i = 0; i < n; i++){
        if(v[i].matricula == matricula){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, matricula, ind;
    cin >> n;
    cin.ignore();
    Aluno v[n];
    
    le_vet(v, n);
    cin >> matricula;
    ind = pesquisa_matricula(v, n, matricula);
    if(ind >= 0){
        cout << "Dados do aluno:" << endl;
        imprime_aluno(v, ind);
    }
    else{
        cout << "Nao existe aluno com a matricula dada!";
    }

    return 0;
}