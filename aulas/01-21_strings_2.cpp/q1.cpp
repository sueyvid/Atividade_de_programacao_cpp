#include <iostream>
#include <cstring>

using namespace std;

const int SMAX = 51;

void remove_espaco(char v[], char v2[]);
bool palindromo(char s1[]){
    int i = 0, n;
    n = strlen(s1-1);
    while(i != '\0'){
        if(s1[i] != s1[n]){
            return false;
        }
        i++;
        n--;
    }
    return true;
}

int main()
{
    char str[SMAX], str2[SMAX];
    
    cin.getline(str, SMAX);
    
    if(palindromo(str)){
        cout << "eh palindromo";
    }
    else{
        cout << "nao eh palindromo";
    }
    
    return 0;
}

void remove_espaco(char v[], char v2[]){
    int i, j = 0;
    for(i = 0; v[i] != '\0'; i++){
        if(v[i] != ' '){
            v2[j] = v[i];
            j++;
        }
    }
    v2[j] = '\0';
}