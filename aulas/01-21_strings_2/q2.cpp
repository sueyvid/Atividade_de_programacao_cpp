#include <iostream>

using namespace std;

const int SMAX = 21;

bool palindromo(char s1[]);
bool palindromo_esp(char s1[]);
int tam(char s1[]);
bool cmp(char s1[], char s2[]);

int main()
{
    char str[SMAX];
    cin.getline(str, SMAX);
    cout << "considerando os espaços:" << endl;
    if(palindromo(str)){
        cout << "eh palindromo";
    }
    else{
        cout << "nao eh palindromo";
    }
    cout << endl;
    cout << "nao considerando os espaços:" << endl;
    if(palindromo_esp(str)){
        cout << "eh palindromo";
    }
    else{
        cout << "nao eh palindromo";
    }
    return 0;
}

bool palindromo(char s1[]){
    char aux[SMAX];
    int i;
    for(i = 0; i < tam(s1); i++){
        aux[i] = s1[tam(s1)-i-1];
    }
    aux[i] = '\0';
    if(cmp(s1, aux)){
        return true;
    }
    else{
        return false;
    }
}

bool palindromo_esp(char s1[]){
    char aux[SMAX], aux2[SMAX];
    int i, j = 0;
    for(i = 0; s1[i] != '\0'; i++){
        if(s1[i] != ' '){
            aux[j] = s1[i];
            j++;
        }
    }
    aux[j] = '\0';
    for(i = 0; i < tam(aux); i++){
        aux2[i] = aux[tam(aux)-i-1];
    }
    aux2[i] = '\0';
    if(cmp(aux, aux2)){
        return true;
    }
    else{
        return false;
    }
}

int tam(char s1[]){
    int i = 0;
    while(s1[i] != '\0'){
        i++;
    }
    return i;
}

bool cmp(char s1[], char s2[]){
    int i = 0;
    while(i < tam(s1)){
        if(s1[i] != s2[i]){
            return false;
        }
        i++;
    }
    return true;
}