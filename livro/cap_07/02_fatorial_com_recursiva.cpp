#include <iostream>

using namespace std;

int fat(int n);

int main()
{
    int x;
    
    cin >> x;
    
    cout << "fatorial = " << fat(x) << endl;
    
    return 0;
}

int fat(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}