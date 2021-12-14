#include <iostream>

using namespace std;

int f(int n);

int main()
{
    int x;
    
    cin >> x;
    
    cout << "soma: " << f(x) << endl;
    
    return 0;
}

int f(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + f(n-1);
    }
}