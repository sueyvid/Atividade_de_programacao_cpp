#include <iostream>

using namespace std;

const int SMAX = 21;

void strinv(char se[], char ss[]);

int main()
{
    char s1[SMAX], s2[SMAX];
    cin.getline(s1, SMAX);
    strinv(s1, s2);
    cout << s2;
    return 0;
}

void strinv(char se[], char ss[]){
    int tam = 0, i = 0;
    while(se[tam] != '\0'){
        tam++;
    }
    while(i <= tam-1){
        ss[i] = se[tam-1-i];
        i++;
    }
    ss[tam] = '\0';
}