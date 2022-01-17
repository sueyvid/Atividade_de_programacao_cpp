#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool divide;
    cin >> x >> y;
    divide = (x%y == 0);
    if(divide){
        cout << x << " e multiplo de " << y;
    }
    else{
        cout << x << " nao e multiplo de " << y;
    }

    return 0;
}