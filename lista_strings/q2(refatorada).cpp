#include <iostream>

using namespace std;

const int SMAX = 51;
const int a_z = 26;

void conta_letras(char se[], int vs[26]);

int main()
{
    char s1[SMAX], carac = 'a';
    int v[a_z], i = 0;
    
    cout << "Informe uma frase:" << endl;
    cin.getline(s1, SMAX);
    
    conta_letras(s1, v);
    cout << "Contagem de caracteres:" << endl;
    while(i < a_z){
        if(v[i] != 0){
            cout << carac << ": " << v[i] << endl;
        }
        carac++;
        i++;
    }
    
    return 0;
}

void conta_letras(char se[], int vs[26]){
    int i, j = 0;
    char carac = 'a';
    
    for(j = 0; j < a_z; j++){
        vs[j] = 0;
    }
    
    j = 0;
    
    while(se[j] != '\0'){
        vs[se[j]-'a']++;
        j++;
    }
}