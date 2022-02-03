#include <iostream>

using namespace std;

const int SMAX = 31;

void retira_espacos(char se[], char ss[]);

int main()
{
    char s1[SMAX], s2[SMAX];
    while(s1[0] != '\0'){
        cin.getline(s1, SMAX);
        retira_espacos(s1, s2);
        if(s1[0] != '\0'){
            cout << "String sem espacos: " << s2 << endl;            
        }
    }
    
    return 0;
}

void retira_espacos(char se[], char ss[]){
    int i = 0, j = 0;
    while(se[i] != '\0'){
        if(se[i] != ' '){
            ss[j] = se[i];
            j++;
        }
        i++;
    }
    ss[j] = '\0';
}