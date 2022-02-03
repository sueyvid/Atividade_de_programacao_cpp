#include <iostream>

using namespace std;

const int SMAX = 21;

void insere_str(char s1[], char s2[], char s3[], int p);
void gera_str(char se[], int a, int b, char ss[]);
int strlen(char s[]);
bool strcmp(char s1[], char s2[]);

int main()
{
    char s1[SMAX], s2[SMAX], s3[SMAX];
    int p;
    cin.getline(s1, SMAX);
    cin.getline(s2, SMAX);
    cin >> p;
    
    insere_str(s1, s2, s3, p);
    
    cout << s3;
    
    return 0;
}

void insere_str(char s1[], char s2[], char s3[], int p){
    int i, n1, n2;
    char aux[SMAX];
    n1 = strlen(s1);
    n2 = strlen(s2);
    
    while(s1[i] < n2-n1){
        cout << gera_str(s1, i, n1, )
    }
}

void gera_str(char se[], int a, int b, char ss[]){
    int i;
    for(i = a; i < b; i++){
        ss[i] = se[i];
    }
}

int strlen(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
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