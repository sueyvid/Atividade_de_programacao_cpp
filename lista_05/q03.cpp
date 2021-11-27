#include <iostream>

using namespace std;

int prod(int a, int b);

int main()
{
    int x, y;
    cin >> x >> y;
    cout << prod(x, y);
    return 0;
}

int prod(int a, int b){
    if(a == 0){
        return 0;
    }
    else{
        return b+prod(a-1,b);
    }
    // 3*3 = 9
    // prod(3) = prod(a-1)+b = prod(3-1)+3 = prod(2)+3 = 6 + 3 = 9
    // prod(2) = prod(a-1)+b = prod(2-1)+3 = prod(1)+3 = 3 + 3 = 6
    // prod(1) = prod(a-1)+b = prod(1-1)+3 = prod(0)+3 = 0 + 3 = 3
    // prod(0) = 0
}