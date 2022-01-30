#include <iostream>

using namespace std;

const int SMAX = 21;

bool eh_palindromo(char s1[]);
bool eh_palindromo_esp(char s1[]);

int main()
{
    char str[SMAX];
    cin.getline(str, SMAX);
    cout << "Considerando os espaços em branco:" << endl;
    if(eh_palindromo(str)){
        cout << "é palindromo" << endl;
    }
    else{
        cout << "não é palindromo" << endl;
    }
    cout << "Não considerando espaços em branco:" << endl;
    if(eh_palindromo_esp(str)){
        cout << "é palindromo" << endl;
    }
    else{
        cout << "não é palindromo" << endl;
    }

    return 0;
}

bool eh_palindromo(char s1[]){
    int i = 0, n = 0;
    char aux[SMAX];
    while(s1[n] != '\0'){
        n++;
    }
    while(i < n){
        aux[i] = s1[n-1-i];
        i++;
    }
    aux[i] = '\0';
    for(i = 0; i < n; i++){
        if(s1[i] != aux[i]){
            return false;
        }
    }
    return true;
}

bool eh_palindromo_esp(char s1[]){
    int i = 0, n = 0;
    char aux[SMAX], aux2[SMAX];
    while(s1[i] != '\0'){
        if(s1[i] != ' '){
            aux[n] = s1[i];
            n++;
        }
        i++;
    }
    aux[i] = '\0';
    i = 0;
    while(i < n){
        aux2[i] = aux[n-1-i];
        i++;
    }
    for(i = 0; i < n; i++){
        if(aux[i] != aux2[i]){
            return false;
        }
    }
    return true;
}