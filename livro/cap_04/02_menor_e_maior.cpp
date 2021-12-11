#include <iostream>

using namespace std;

int main()
{
    int n, i, x, maior, menor;
    cin >> n;
    cin >> x;
    menor = x;
    maior = x;
    for(i = 0; i < n-1; i++){
        cin >> x;
        if(x > maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
        }
    }
    cout << "Menor: " << menor << ", maior: " << maior;
    return 0;
}
