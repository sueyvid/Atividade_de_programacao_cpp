#include <iostream>

using namespace std;

int main()
{
    char l1, l2, l3, aux;
    cin >> l1 >> l2 >> l3;
    if(l1 > l2){
        aux = l1;
        l1 = l2;
        l2 = aux;
    }
    if(l1 > l3){
        aux = l1;
        l1 = l3;
        l3 = aux;
    }
    if(l2 > l3){
        aux = l2;
        l2 = l3;
        l3 = aux;
    }
    
    cout << l1 << " " << l2 << " " << l3;
    return 0;
}