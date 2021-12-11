#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    float u[n], v[n], soma[n];
    
    for(i = 0; i < n; i++){
        cin >> u[i];
    }
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    for(i = 0; i < n; i++){
        soma[i] = u[i] + v[i];
        cout << soma[i] << endl;
    }
    return 0;
}
