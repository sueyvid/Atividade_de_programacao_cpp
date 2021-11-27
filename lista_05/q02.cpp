#include <iostream>

using namespace std;

int s(int n);

int main()
{
    int x, i;
    cin >> x;
    for(i = 0; i <= x; i++){
        cout << s(i) << endl;
    }
    return 0;
}

int s(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 2;
    }
    else{
        return 3*s(n-2)-2*s(n-1);
    }
}