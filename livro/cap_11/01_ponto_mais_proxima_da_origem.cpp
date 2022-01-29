#include <iostream>

using namespace std;

struct Ponto2D{
    int x;
    int y;
};

Ponto2D perto_origem(Ponto2D v[], int n);

int main()
{
    int n, i;
    cout << "Digite a quantidade de pontos:" << endl;
    cin >> n;
    Ponto2D ponto[n];
    cout << "Digite a coordenada dos pontos:" << endl;
    for(i = 0; i < n; i++){
        cin >> ponto[i].x;
        cin >> ponto[i].y;
    }
    cout << "A coordenada mais proxima da origem:" << endl;
    cout << perto_origem(ponto, n).x << " " << perto_origem(ponto, n).y;

    return 0;
}

Ponto2D perto_origem(Ponto2D v[], int n){
    int i;
    Ponto2D prox, aux;
    prox = v[0];
    for(i = 0; i < n; i++){
        if(v[i].x < 0){
            aux.x = v[i].x * (-1);
        }
        else{
            aux.x = v[i].x;
        }
        if(v[i].y < 0){
            aux.y = v[i].y * (-1);
        }
        else{
            aux.y = v[i].y;
        }
        if(v[i].x + v[i].y <= prox.x + prox.y){
            prox = v[i];
        }
    }
    return prox;
}