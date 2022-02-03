#include <iostream>

using namespace std;

struct Ponto2D{
    int x;
    int y;
};

struct Rect{
    Ponto2D se;
    Ponto2D id;
};

int dentro_do_rect(Ponto2D v[], int n, Rect a);

int main()
{
    int n, i;
    
    cout << "Digite a quantidade de pontos:" << endl;
    cin >> n;
    Ponto2D v[n];
    Rect a;
    
    cout << "Digite as coordenadas dos pontos:" << endl;
    for(i = 0; i < n; i++){
        cin >> v[i].x;
        cin >> v[i].y;
    }
    
    cout << "Digite as coordenadas do vértice superior esquerdo:" << endl;
    cin >> a.se.x;
    cin >> a.se.y;
    
    cout << "Digite as coordenadas do vértice inferior direito:" << endl;
    cin >> a.id.x;
    cin >> a.id.y;
    
    cout << "Estão dentro do retângulo " << dentro_do_rect(v, n, a) << " dos " << n << " pontos";
    
    return 0;
}

int dentro_do_rect(Ponto2D v[], int n, Rect a){
    int i, dentro = 0;
    for(i = 0; i < n; i++){
        if(v[i].x >= a.se.x && v[i].x <= a.id.x){
            if(v[i].y <= a.se.y && v[i].y >= a.id.y){
                dentro++;
            }
        }
    }
    return dentro;
}