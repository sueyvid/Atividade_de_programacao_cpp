#include <iostream>

using namespace std;

int const SMAX = 51;

bool eh_substring(char s1[], char s2[]);
int tam(char s1[]);
void str_intervalo(int p, int q, char se[], char ss[]);
bool strcmp(char s1[], char s2[]);

int main()
{
    char s1[SMAX], s2[SMAX];
    
    cout << "Informe a primeira string:" << endl;
    cin.getline(s1, SMAX);
    cout << "Informe a segunda string:" << endl;
    cin.getline(s2, SMAX);
    
    if(eh_substring(s1, s2)){
        cout << "A segunda string faz parte da primeira";
    }
    else{
        cout << "A segunda string nao faz parte da primeira";
    }
    
    return 0;
}

bool eh_substring(char s1[], char s2[]){
    int i = 0;
    char aux[SMAX];
    while(i <= tam(s1)-tam(s2)){
        str_intervalo(i, i+tam(s2)-1, s1, aux);
        if(strcmp(aux, s2)){
            return true;
        }
        i++;
    }
    return false;
}

int tam(char s1[]){
    int i = 0;
    while(s1[i] != '\0'){
        i++;
    }
    return i;
}

void str_intervalo(int p, int q, char se[], char ss[]){
    int i, j = 0;
    for(i = p; i <= q; i++){
        ss[j] = se[i];
        j++;
    }
    ss[j] = '\0';
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