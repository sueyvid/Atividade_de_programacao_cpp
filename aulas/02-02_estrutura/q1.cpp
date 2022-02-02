#include <iostream>

using namespace std;

const int SMAX = 21;

struct Aluno{
    char nome[SMAX];
    float nota;
};

Aluno menor_nota(Aluno v[], int n){
    int i;
    Aluno menor;
    menor = v[0];
    for(i = 0; i < n; i++){
        if(v[i].nota < menor.nota){
            menor = v[i];
        }
    }
    return menor;
}

int main()
{
    int n, i;
    Aluno a;
    
    cout << "Digite a quantidade de alunos:" << endl;
    cin >> n;
    
    Aluno v[n];
    
    cout << "Digite os dados do aluno:" << endl;
    for(i = 0; i < n; i++){
        cin.ignore();
        cin.getline(v[i].nome, SMAX);
        cin >> v[i].nota;
    }
    
    a = menor_nota(v, n);
    cout << "Nome: " << a.nome << endl;
    cout << "Nota: " << a.nota << endl;

    return 0;
}