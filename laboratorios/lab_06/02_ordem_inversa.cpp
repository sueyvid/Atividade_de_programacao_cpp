#include <iostream>

using namespace std;

int ordem_inversa(int x);

int main()
{
    int n;
    cin >> n;
    cout << ordem_inversa(n) << endl;
    return 0;
}

int ordem_inversa(int x){
    int termo, dezena;
    if(x < 10){
        return 0;
    }
    else{
        termo = x%10;
        return termo + ordem_inversa(x/10);
    }
}

//sei que não é isso, mas é que acabou o tempo e eu queria ver qual a saída que o programa pedia, então fiz um programa "qualquer"