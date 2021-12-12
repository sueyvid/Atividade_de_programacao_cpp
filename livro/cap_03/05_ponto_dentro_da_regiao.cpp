#include <iostream>

using namespace std;

int main(){
    int x, y, xse, yse, xid, yid;
    bool esta_dentro;
    
    cout << "Indique a coordenada do ponto:" << endl;
    cin >> x >> y;
    cout << "Indique a coordenada do vertice superior esquerdo do retangulo:" << endl;
    cin >> xse >> yse;
    cout << "Indique a coordenada do vertice inferior direito do retangulo:" << endl;
    cin >> xid >> yid;
    
    esta_dentro = x >= xse && y <= yse && x <= xid && y >= yid;
    
    if(esta_dentro)
        cout << "O ponto (" << x << "," << y << ") esta dentro da regiao";
    else
        cout << "O ponto (" << x << "," << y << ") nao esta dentro da regiao";
    
    return 0;
}