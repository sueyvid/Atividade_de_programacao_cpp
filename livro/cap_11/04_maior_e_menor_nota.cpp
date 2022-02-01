#include <iostream>

using namespace std;

const int SMAX = 21;

struct Aluno{
    char nome[SMAX];
    int matricula;
    float nota;
};

void notaMinMax(Aluno v[], int n, float &menor, float &maior);
int maiorNome(Aluno v[], int n);

int main()
{
    int n, i, opcao;
    float maior, menor;
    cout << "Digite a quantidade de alunos:" << endl;
    cin >> n;
    Aluno aluno[n];
    
    cout << "\nQual função você deseja usar:" << endl;
    cout << "0.sair 1.notaMinMax()" << endl;
    cout << "opcao: ";
    cin >> opcao;
    cout << endl;
    
    switch(opcao){
        case 1:
            cout << "Digite os dados dos alunos:" << endl;
            for(i = 0; i < n; i++){
                cin.ignore();
                cout << "Nome: ";
                cin.getline(aluno[i].nome, SMAX);
                cout << "Matricula: ";
                cin >> aluno[i].matricula;
                cout << "Nota: ";
                cin >> aluno[i].nota;
            }
            
            notaMinMax(aluno, n, menor, maior);
            cout << "\nResultado" << endl;
            cout << "Menor nota = " << menor << endl;
            for(i = 0; i < n; i++){
                if(aluno[i].nota == menor){
                    cout << aluno[i].nome << " - " << aluno[i].matricula << endl;
                }
            }
            cout << "\nMaior nota = " << maior << endl;
            for(i = 0; i < n; i++){
                if(aluno[i].nota == maior){
                    cout << aluno[i].nome << " - " << aluno[i].matricula << endl;
                }
            }
        break;
        
        case 2:
            cout << "Digite os dados dos alunos:" << endl;
            for(i = 0; i < n; i++){
                cin.ignore();
                cout << "Nome: ";
                cin.getline(aluno[i].nome, SMAX);
                cout << "Matricula: ";
                cin >> aluno[i].matricula;
                cout << "Nota: ";
                cin >> aluno[i].nota;
            }
            
        break;
        case 0:
        break;
    }

    return 0;
}

void notaMinMax(Aluno v[], int n, float &menor, float &maior){
    int i;
    menor = maior = v[0].nota;
    for(i = 0; i < n; i++){
        if(v[i].nota < menor){
            menor = v[i].nota;
        }
        if(v[i].nota > maior){
            maior = v[i].nota;
        }
    }
}