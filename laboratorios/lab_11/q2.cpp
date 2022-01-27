#include <iostream>

using namespace std;

const int SMAX = 99;

int main()
{
    char a[SMAX], b[SMAX], c[SMAX];
    int i, j = 0, palavras = 1;
    cin.getline(a, SMAX);
    cin.getline(b, SMAX);
    for(i = 0; a[i] != '\0'; i++){
        c[j] = a[i];
        j++;
    }
    c[j] = ' ';
    j++;
    
    for(i = 0; b[i] != '\0'; i++){
        c[j] = b[i];
        j++;
    }
    c[j] = '\0';
    
    for(i = 0; c[i] != '\0'; i++){
        if(c[i] == ' ' && c[i+1] != '\0'){
            palavras++;
        }
    }
    
    cout << c << endl
         << palavras << " palavras";
    return 0;
}