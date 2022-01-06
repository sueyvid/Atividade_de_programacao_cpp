#include <iostream>

using namespace std;

int main()
{
    int l, h, i, j;
    cout << "Insira a largura e a altura do retangulo:" << endl;
    cin >> l >> h;
    
    for(i = 0; i < h; i++){
        for(j = 0; j < l; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}