#include <iostream>

using namespace std;

int main(){
    char carac;
    bool vogal, consoante;
    
    cin >> carac;
    
    vogal = carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u';
    consoante = carac >= 'a' && carac <= 'z' && carac != vogal;
    
    if(vogal)
        cout << carac << " e uma vogal";
    else if(consoante)
        cout << carac << " e uma consoante";
    else
        cout << carac << " e um simbolo qualquer";
    
    return 0;
}