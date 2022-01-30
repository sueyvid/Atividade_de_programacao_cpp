#include <iostream>

using namespace std;

const int SMAX = 51;
const int ABC = 26;

void conta_letras(char se[], int v[]);

int main()
{
    int i = 0, v[ABC];
    char str[SMAX];
    cin.getline(str, SMAX);
    conta_letras(str, v);
    while(i < ABC){
        if(v[i] != 0){
            cout << char('a'+i) << ": " << v[i] << endl;
        }
        i++;
    }

    return 0;
}

void conta_letras(char se[], int v[]){
    int i = 0;
    while(i < ABC){
        v[i] = 0;
        i++;
    }
    i = 0;
    while(se[i] != '\0'){
        v[se[i]-'a']++;
        i++;
    }
}