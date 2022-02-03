#include <iostream>

using namespace std;

const int SMAX = 100;

void insere_str(char s1[], char s2[], char s3[], int p);

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
    int i = 0, j = 0, k = 0;
    
    while(i < p){
        s3[k] = s1[i];
        i++;
        k++;
    }
    while(s2[j] != '\0'){
        s3[k] = s2[j];
        k++;
        j++;
    }
    while(s1[i] != '\0'){
        s3[k] = s1[i];
        k++;
        i++;
    }
    s3[k] = '\0';
}