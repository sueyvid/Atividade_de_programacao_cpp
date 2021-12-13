#include <iostream>

using namespace std;

int main()
{
    int i, j;
    
    for(i = 1; i <= 10; i++){
        cout << "Tabuada para o numero " << i << endl;
        for(j = 1; j <= 10; j++){
            cout << i << " * " << j << " = " << i*j << endl;
        }
        cout << endl;
    }
        
    return 0;
}