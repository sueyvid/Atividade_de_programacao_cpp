#include <iostream>

using namespace std;

int main()
{
    int n, i, cont = 0;
    char carac;
    bool eh_letra;
    
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> carac;
        eh_letra = ((carac >= 'a' && carac <= 'z') || (carac >= 'A' && carac <= 'Z'));
        if(eh_letra){
            cont++;
        }
    }
    cout << "Total de letras digitadas: " << cont;
    return 0;
}