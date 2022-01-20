#include <iostream>
#include <iomanip>

using namespace std;

const int SMAX = 51;

int strlen(char s[]);
void strcpy(char dest[], char orig[]);
void strcat(char s1[], char s2[]);
int strcmp(char s1[], char s2[]);

int main()
{
    char str[SMAX], dest[SMAX], orig[SMAX], s1[SMAX], s2[SMAX];
    int opcao = 0;
    
    do{
        cout << "qual função você gostaria de testar? \n1-strlen() | 2-strcpy | 3-strcat | 4-strcmp | 0-sair" << endl;
        cin >> opcao;
        cout << endl;
        
        if(opcao == 1){
            cout << setw(30) << setfill('*') << " Função strlen(): " << endl;
            
            cout << "Digite uma string de no máximo 50 caracteres: " << endl;
            cout << "Entrada: ";
            cin >> str;
            
            cout << "Tamanho da string: " << strlen(str) << " caracteres" << endl;
        }
        if(opcao == 2){
            cout << setw(30) << " Função strcpy(): " << endl;
            
            cout << "Digite uma string de no máximo 50 caracteres: " << endl;
            cout << "Entrada: ";
            cin >> dest;
            cout << "Digite uma string para substituir a anterior: " << endl;
            cout << "Entrada: ";
            cin >> orig;
            
            strcpy(dest, orig);
            cout << "Primeira string: " << dest << endl;
            cout << "Segunda string: " << orig << endl;
        }
        if(opcao == 3){
            cout << setw(30) << " Função strcat(): " << endl;
            
            cout << "Digite uma string de no máximo 50 caracteres: " << endl;
            cout << "Entrada: ";
            cin >> s1;
            cout << "Digite uma string para concatenar com a anterior: " << endl;
            cout << "Entrada: ";
            cin >> s2;
            
            strcat(s1, s2);
            cout << "Primeira string: " << s1 << endl;
            cout << "Segunda string: " << s2 << endl;
        }
        if(opcao == 4){
            cout << setw(30) << " Função strcmp(): " << endl;
            
            cout << "Digite a primeira string: " << endl;
            cout << "Entrada: ";
            cin >> s1;
            cout << "Digite a segunda string: " << endl;
            cout << "Entrada: ";
            cin >> s2;
            
            cout << "Comparacao entre as duas strings: " << strcmp(s1, s2) << endl;
        }
        cout << endl;
    }while(opcao != 0);
    
    return 0;
}

int strlen(char s[]){
    int cont = 0;
    while(s[cont] != '\0'){
        cont++;
    }
    return cont;
}

void strcpy(char dest[], char orig[]){
    int i = 0;
    while(orig[i] != '\0'){
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

void strcat(char s1[], char s2[]){
    int i = 0, j = 0;
    while(s2[j] != '\0'){
        if(s1[i] == '\0'){
            s1[i] = s2[j];
            j++;
        }
        i++;
    }
    s2[j] = '\0';
}

int strcmp(char s1[], char s2[]){
    int i = 0, cmp = 0;
    do{
        cmp += s1[i] - s2[i];
        i++;
    }while(s1[i-1] != '\0');
    return cmp;
}