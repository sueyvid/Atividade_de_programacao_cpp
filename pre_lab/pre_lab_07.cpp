#include <iostream>

using namespace std;

int main()
{
    int tam, i, j, cont = 0;
    cin >> tam;
    int v[tam];
    
    for(i = 0; i < tam; i++){
        cin >> v[i];
    }
    
    cout << v[0] << " ";
    for(i = 1; i < tam; i++){
        for(j = i-1; j >= 0; j--){
            if(v[i] == v[j]){
                cont++;
            }
        }
        if(cont == 0){
            cout << v[i] << " ";
        }
        cont = 0;
    }
    
    return 0;
}