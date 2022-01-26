#include <iostream>

using namespace std;

int const SMAX = 51;

bool eh_substring(char s1[], char s2[]);
int tam(char s1[]);

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
    int i = 0, j = 0, cont = 0;
    while(s1[i] != '\0'){
        while(s1[i] == s2[j]){
            cont++;
            if(cont == tam(s2)){
                return true;
            }
            i++;
            j++;
        }
        cont = 0;
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