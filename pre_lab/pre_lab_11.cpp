#include <iostream>

using namespace std;

const int SMAX = 21;

void insere_string(char s1[], char s2[], char s3[], int p);

int main()
{
    char s1[SMAX], s2[SMAX], s3[SMAX+SMAX];
    int p;
    
    cin.getline(s1, SMAX);
    cin.getline(s2, SMAX);
    cin >> p;
    insere_string(s1, s2, s3, p);
    cout << s3;
    
    return 0;
}

void insere_string(char s1[], char s2[], char s3[], int p){
    int i, j, z = 0;
    for(i = 0; i < p; i++, z++){
        s3[z] = s1[i];
    }
    for(j = 0; s2[j] != '\0'; j++, z++){
        s3[z] = s2[j];
    }
    for(; s1[i] != '\0'; i++, z++){
        s3[z] = s1[i];
    }
    s3[z] = '\0';
}