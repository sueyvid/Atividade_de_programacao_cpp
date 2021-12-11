#include <iostream>

using namespace std;

int main()
{
    int n, cont = 0, i;
    cin >> n;
    char v[n], carac;
    
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    
    cin >> carac;
    
    for(i = 0; i < n; i++){
        if(v[i] == carac){
            cont++;
        }
    }
    
    if(cont == 0){
        cout << carac << " nao ocorre no vetor";
    }
    if(cont == 1){
        cout << carac << " nao se repete no vetor";
    }
    if(cont > 1){
        cout << carac << " se repete no vetor";
    }
    
    return 0;
}