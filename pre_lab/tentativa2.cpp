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
    int i[4] = {0}, j, t = 0;
    
    i[0] = tam(s1)+tam(s2);
    
    while(i[3] < i[0]){
        if(i[1] >= p){
            t = tam(s2);
        }
        if(s1[i[1]] != '\0'){
            s3[i[3]+t] = s1[i[1]];
            i[1]++;
        }
        if(s2[i[2]] != '\0'){
            s3[i[3]+p] = s2[i[2]];
            i[2]++;
        }
        i[3]++;
    }
    s3[i[3]] = '\0';
}

int tam(char s[]){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}