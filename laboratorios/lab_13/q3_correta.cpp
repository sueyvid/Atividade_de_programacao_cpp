#include <iostream>

using namespace std;

const int SMAX = 51;
const int MAX = 10;

struct Cidade{
    char nome[SMAX];
    int qtd_aeroportos;
    char pais[SMAX];
};

void le_vet(Cidade v[], int n){
    int i;
    for(i = 0; i < n; i++){
        cin.getline(v[i].nome, SMAX);
        cin >> v[i].qtd_aeroportos;
        cin.ignore();
        cin.getline(v[i].pais, SMAX);
    }
}

void le_mat(int A[][MAX], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
}

int voo_mais_barato(int A[][MAX], int n, int p, int &ind){
    int j, menor;
    menor = A[p][0];
    ind = 0;
    for(j = 1; j < n; j++){
        if(A[p][j] < menor && p != j){
            menor = A[p][j];
            ind = j;
        }
    }
    return menor;
}

void imprime_cidade(Cidade v[], int p, int ind, int valor){
    cout << "Voo mais barato partindo de " << v[p].nome << ": "
         << v[ind].nome << " (" << v[ind].pais << ") - "
         << v[ind].qtd_aeroportos << " aeroporto(s) - "
         << "R$" << valor;
}

int main()
{
    int n, nl, nc, p, ind, valor;
    cin >> n;
    cin.ignore();
    Cidade v[n];
    int A[MAX][MAX];
    
    le_vet(v, n);
    le_mat(A, n);
    cin >> p;
    valor = voo_mais_barato(A, n, p, ind);
    imprime_cidade(v, p, ind, valor);

    return 0;
}