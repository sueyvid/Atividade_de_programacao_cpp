#include <iostream>

using namespace std;

const int SMAX = 21;

void str_intervalo(int p, int q, char se[], char ss[]);

int main()
{
    char s1[SMAX], s2[SMAX];
    int p, q;
    cout << "Digite a string desejada:" << endl;
    cin.getline(s1, SMAX);
    cout << "Digite o intervalo dos caracteres:" << endl;
    cin >> p >> q;
    
    str_intervalo(p, q, s1, s2);
    cout << s2;
    
    return 0;
}

void str_intervalo(int p, int q, char se[], char ss[]){
    int i, j = 0;
    for(i = p; i <= q; i++){
        ss[j] = se[i];
        j++;
    }
    ss[j] = '\0';
}