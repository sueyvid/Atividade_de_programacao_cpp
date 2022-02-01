#include <iostream>

using namespace std;

const int SMAX = 21;

struct Aluno{
    char nome[SMAX];
    int matricula;
    float nota;
};

void notaMaxMin(Aluno v[], int n, Aluno menor, Aluno maior);
void imprime_dados(Aluno aluno);

int main()
{
    int n, i;
    cout << "Digite a quantidade de alunos:" << endl;
    cin >> n;
    Aluno aluno[n], menor, maior;
    for(i = 0; i < n; i++){
        cout << "Digite os dados do aluno:" << endl;
        cin.ignore();
        cout << "Nome: ";
        cin.getline(aluno[i].nome, SMAX);
        cout << "Matricula: ";
        cin >> aluno[i].matricula;
        cout << "Nota: ";
        cin >> aluno[i].nota;
    }
    cout << endl;
    notaMaxMin(aluno, n, menor, maior);

    return 0;
}

void notaMaxMin(Aluno v[], int n, Aluno menor, Aluno maior){
    int i;
    float maior_nota, menor_nota;
    maior_nota = menor_nota = v[0].nota;
    for(i = 0; i < n; i++){
        if(v[i].nota > maior_nota){
            maior_nota = v[i].nota;
            maior = v[i];
        }
        if(v[i].nota < menor_nota){
            menor_nota = v[i].nota;
            menor = v[i];
        }
    }
    cout << "Resultado:" << endl;
    for(i = 0; i < n; i++){
        if(v[i].nota == menor_nota){
            imprime_dados(v[i]);
        }
    }
    for(i = 0; i < n; i++){
        if(v[i].nota == maior_nota){
            imprime_dados(v[i]);
        }
    }
}

void imprime_dados(Aluno aluno){
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matrícula: " << aluno.matricula << endl;
    cout << "Nota: " << aluno.nota << endl;
    cout << endl;
}