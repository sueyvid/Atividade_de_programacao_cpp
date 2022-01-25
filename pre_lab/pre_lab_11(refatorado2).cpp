#include <iostream>

using namespace std;

const int SMAX = 21;

void insere_string(char s1[], char s2[], char s3[], int p);
int tam(char s[]);

int main()
{
    char s1[SMAX], s2[SMAX], s3[SMAX];
    int p;
    
    cin.getline(s1, SMAX);
    cin.getline(s2, SMAX);
    cin >> p;
    insere_string(s1, s2, s3, p);
    cout << s3;
    
    return 0;
}

void insere_string(char s1[], char s2[], char s3[], int p){
    int i = 0, j = 0, k = 0, z;
    z = tam(s1) + tam(s2);
    
    while(i < z){
        if(i < p){
            s3[i] = s1[i]; 
        }
        if(s2[j] != '\0'){
            s3[i+p] = s2[j];
            j++;
        }
        if(s1[k] != '\0'){
            s3[i+p+tam(s2)] = s1[k+p];
            k++;
        }
        i++;
    }
    s3[i] = '\0';
}

int tam(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}