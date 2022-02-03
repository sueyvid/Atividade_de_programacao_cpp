#include <iostream>

using namespace std;

const int SMAX = 99;

bool eh_palindromo(char se[]);

int main()
{
    char s1[SMAX];
    cin.getline(s1, SMAX);
    
    if(eh_palindromo(s1)){
        cout << "E palindromo";
    }
    else{
        cout << "Nao e palindromo";
    }
    
    return 0;
}

bool eh_palindromo(char se[]){
    int i = 0, j = 0, n = 0;
    char aux[SMAX], aux2[SMAX];
    while(se[i] != '\0'){
        if(se[i] != ' '){
            aux[j] = se[i];
            j++;
        }
        i++;
    }
    aux[j] = '\0';
    while(aux[n] != '\0'){
        n++;
    }
    i = 0;
    while(aux[i] != '\0'){
        aux2[i] = aux[n-i-1];
        i++;
    }
    aux2[i] = '\0';
    i = 0;
    while(aux[i] != '\0'){
        if(aux[i] != aux2[i]){
            return false;
        }
        i++;
    }
    return true;
}