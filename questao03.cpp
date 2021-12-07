#include <iostream>

using namespace std;

int ordem_inversa(int x);

int main()
{
    int n, i;
    cin >> n;
    for(i = n; i < 10; i /= 10){
        cout << ordem_inversa(i) << endl;
    }
    return 0;
}

int ordem_inversa(int x){
    int termo;
    if(x < 10){
        return 0;
    }
    else{
        termo = x%10;
        return termo + ordem_inversa(x%10);
    }
}

// 123 = 3 2 1
// f(123) = 123%10 == 3
