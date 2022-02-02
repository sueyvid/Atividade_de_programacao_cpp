#include <iostream>

using namespace std;

struct Ponto2D{
    float x;
    float y;
};

Ponto2D maisProximoDaOrigem(Ponto2D v[], int n);
int modulo(int x);
Ponto2D centroide(Ponto2D v[], int n);

int main()
{
    int n, i;
    cout << "Digite a quantidade de pontos:" << endl;
    cin >> n;
    Ponto2D ponto[n];
    
    cout << "Digite as coordenadas dos pontos:" << endl;
    for(i = 0; i < n; i++){
        cin >> ponto[i].x;
        cin >> ponto[i].y;
    }
    
    cout << "\nPonto: "
         << maisProximoDaOrigem(ponto, n).x << " "
         << maisProximoDaOrigem(ponto, n).y << endl;
    
    cout << "\nCentroide: "
         << centroide(ponto, n).x << " "
         << centroide(ponto, n).y << endl;
    
    return 0;
}

Ponto2D maisProximoDaOrigem(Ponto2D v[], int n){
    int i, menor, pos = 0;
    
    menor = modulo(v[0].x)+modulo(v[0].y);
    
    for(i = 0; i < n; i++){
        if(modulo(v[i].x)+modulo(v[i].y) < menor){
            menor = modulo(v[i].x)+modulo(v[i].y);
            pos = i;
        }
    }
    return v[pos];
}

int modulo(int x){
    if(x < 0){
        x *= (-1);
    }
    return x;
}

Ponto2D centroide(Ponto2D v[], int n){
    int i;
    Ponto2D centro = {0};
    for(i = 0; i < n; i++){
        centro.x += v[i].x;
        centro.y += v[i].y;
    }
    centro.x /= n;
    centro.y /= n;
    return centro;
}