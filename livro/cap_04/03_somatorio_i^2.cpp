#include <iostream>

using namespace std;

int main(){
    int n, i, total = 0;
    
    cout << "Insira um valor para n" << endl;
    cin >> n;
    
    cout << "Para n = " << n << ": ";
    for(i = 1; i < n; i++){
        cout << i*i << " + ";
        total += i*i;
    }
    cout << n*n << endl;
    total += n*n;
    cout << "Total = " << total << endl;
    
    return 0;
}