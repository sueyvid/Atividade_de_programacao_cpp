#include <iostream>

using namespace std;

const int SMAX = 51;

struct Aluno{
    char nome[SMAX];
    int matricula;
    float nota;
};

void notaMinMax(Aluno v[], int n, float &menor, float &maior);
int maiorNome(Aluno v[], int n);
int buscarAluno(Aluno v[], int n, char s[]);
bool strcmp(char s1[], char s2[]);

int main()
{
    int n, i, opcao, busca;
    float maior, menor;
    char s[SMAX];
    cout << "Digite a quantidade de alunos:" << endl;
    cin >> n;
    Aluno aluno[n];
    
    cout << "\nQual função você deseja usar:" << endl;
    cout << "0.sair 1.notaMinMax() 2.maiorNome() 3.buscarAluno()" << endl;
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
            cout << "\nResultado:" << endl;
            cout << "Nome: " << aluno[maiorNome(aluno, n)].nome << endl;
            cout << "Matricula: " << aluno[maiorNome(aluno, n)].matricula << endl;
            cout << "Nota: " << aluno[maiorNome(aluno, n)].nota << endl;
        break;
        
        case 3:
            cout << "Digite os dados do aluno" << endl;
            for(i = 0; i < n; i++){
                cin.ignore();
                cout << "Nome: ";
                cin.getline(aluno[i].nome, SMAX);
                cout << "Matricula: ";
                cin >> aluno[i].matricula;
                cout << "Nota: ";
                cin >> aluno[i].nota;
            }
            cin.ignore();
            cout << "\nDigite o nome do aluno que deseja buscar" << endl;
            cin.getline(s, SMAX);
            cout << "\nResultado:" << endl;
            busca = buscarAluno(aluno, n, s);
            if(busca >= 0){
                cout << "Nome: " << aluno[busca].nome << endl;
                cout << "Matricula: " << aluno[busca].matricula << endl;
                cout << "Nota: " << aluno[busca].nota << endl;
            }
            else{
                cout << "Aluno " << s << " não encontrado";
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

int maiorNome(Aluno v[], int n){
    int i, j = 0, maior, pos;
    maior = 0;
    for(i = 0; i < n; i++){
        while(v[i].nome[j] != '\0'){
            j++;
        }
        if(j > maior){
            pos = i;
            maior = j;
        }
        j = 0;
    }
    return pos;
}

int buscarAluno(Aluno v[], int n, char s[]){
    int i;
    for(i = 0; i < n; i++){
        if(strcmp(v[i].nome, s)){
            return i;
        }
    }
    return -1;
}

bool strcmp(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        if(s1[i] != s2[i]){
            return false;
        }
        i++;
    }
    return true;
}