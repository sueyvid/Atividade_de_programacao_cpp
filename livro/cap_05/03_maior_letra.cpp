#include <iostream>

using namespace std;

char maior_letra(char a, char b, char c);

int main()
{
    char l1, l2, l3;
    
    cout << "Insira tres letras:" << endl;
    cin >> l1 >> l2 >> l3;
    
    cout << "Mairo letra:" << endl;
    cout << maior_letra(l1,l2,l3);
    
    return 0;
}

char maior_letra(char a, char b, char c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}