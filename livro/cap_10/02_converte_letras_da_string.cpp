#include <iostream>

using namespace std;

const int SMAX = 51;

void strcnv(char se[], char ss[]);

int main()
{
    char s1[SMAX], s2[SMAX];
    cin.getline(s1, SMAX);
    strcnv(s1, s2);
    cout << s2;
    
    return 0;
}

void strcnv(char se[], char ss[]){
    int i = 0, conv = int('a')-int('A');
    bool min, mai;
    
    while(se[i] != '\0'){
        min = se[i] >= 'a' && se[i] <= 'z';
        mai = se[i] >= 'A' && se[i] <= 'Z';
        if(min){
            ss[i] = se[i]-conv; 
        }
        if(mai){
            ss[i] = se[i]+conv;
        }
        if(se[i] == ' '){
            ss[i] = ' ';
        }
        i++;
    }
    ss[i] = '\0';
}