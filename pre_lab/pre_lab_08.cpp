/*
    Implemente uma função que receba como parâmetros dois vetores de caracteres
    e os seus respectivos tamanhos (os vetores podem ter tamanhos diferentes).
    A função deve armazenar em um vetor (parâmetro de saída) o conjunto intersecção
    formado por todos os elementos do primeiro vetor que também pertencem ao segundo vetor,
    além de armazenar também o seu novo tamanho em um segundo parâmetro de saída.
    Lembre-se que em um conjunto, um mesmo valor não está presente mais de uma vez.

    A função main deve ler o tamanho de dois vetores, cada um dos seus elementos
    e exibir o tamanho e o vetor calculado pela função solicitada. Você pode
    implementar funções utilitárias para ler e imprimir vetores na função main.
    Imprima a mensagem "Conjunto vazio" se o vetor resultante possuir tamanho 0.
    Os vetores possuem no máximo 10 elementos.
*/

#include <iostream>

using namespace std;

void le_f(char v[], int tam);
void imprime_f(char v[], int tam);
void interseccao(char v1[], char v2[], char saida[], int tam1, int tam2, int &tam_saida);

int main()
{
    int x1, x2, x3;
    
    cin >> x1;
    char vet1[x1];
    le_f(vet1,x1);
    
    cin >> x2;
    char vet2[x2], vet3[10];
    le_f(vet2,x2);
    
    interseccao(vet1,vet2,vet3,x1,x2,x3);
    
    cout << "Tamanho " << x3 << endl;
    if(x3 == 0){
        cout << "Conjunto vazio";
    }
    else{
        imprime_f(vet3,x3);
    }
    
    return 0;
}

void le_f(char v[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        cin >> v[i];
    }
}

void imprime_f(char v[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        cout << v[i] << " ";
    }
}

void interseccao(char v1[], char v2[], char saida[], int tam1, int tam2, int &tam_saida){
    int i, j, z;
    bool repete;
    
    tam_saida = 0;
    for(i = 0; i < tam1; i++){
        repete = false;
        for(j = 0; j < tam2; j++){
            if(v1[i] == v2[j]){
                for(z = 0; z < tam1-1; z++){
                    if(v1[i] == saida[z]){
                        repete = true;
                        break;
                    }
                }
                if(!repete){
                    saida[tam_saida] = v1[i];
                    tam_saida++;
                    break;
                }
            }
        }
    }
}