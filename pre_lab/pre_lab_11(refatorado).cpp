#include <iostream>

using namespace std;

const int SMAX = 21;

void insere_string(char s1[], char s2[], char s3[], int p);

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
    int i[4] = {0};
    while(i[1] < p){
        s3[i[3]] = s1[i[1]];
        i[1]++;
        i[3]++;
    }
    while(s2[i[2]] != '\0'){
        s3[i[3]] = s2[i[2]];
        i[2]++;
        i[3]++;
    }
    while(s1[i[1]] != '\0'){
        s3[i[3]] = s1[i[1]];
        i[1]++;
        i[3]++;
    }
    s3[i[3]] = '\0';
}