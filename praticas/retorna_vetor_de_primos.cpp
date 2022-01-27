#include <iostream>

using namespace std;

const int SMAX = 101;

int primos(int n, int v[]);

int main()
{
    int n, i, v[SMAX];
    cin >> n;
    for(i = 0; i < primos(n, v); i++){
        cout << v[i] << " ";
    }
    return 0;
}

int primos(int n, int v[]){
    int i, j, k = 0, cont = 0;
    for(i = 2; i < n; i++){
        for(j = 1; j <= i; j++){
            if(i%j == 0){
                cont++;
            }
        }
        if(cont == 2){
            v[k] = i;
            k++;
        }
        cont = 0;
    }
    return k;
}