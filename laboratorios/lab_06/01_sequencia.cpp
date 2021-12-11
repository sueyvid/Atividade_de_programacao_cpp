#include <iostream>

using namespace std;

int seq(int x);

int main()
{
    int k;
    cin >> k;
    cout << "O termo " << k << " da sequência = " << seq(k);
    return 0;
}

int seq(int x){
    if(x == 1){
        return 1;
    }
    if(x == 2){
        return 2;
    }
    else{
        return seq(x-1) + 2*seq(x-2);
    }
}