#include <iostream>

using namespace std;

float cal_potencia(float a, int b);
float cal_fatorial(float a);
float cal_somatorio(float a, int b);

int main()
{
    float x;
    int n;
    cin >> x >> n;
    
    cout << cal_potencia(x,n) << endl;
    cout << cal_fatorial(x) << endl;
    cout << cal_somatorio(x,n) << endl;
    
    return 0;
}

float cal_potencia(float a, int b){
    int i, result = 1;
    for(i = 1; i < b; i++){
        result *= a*a;
    }
    return result;
}

float cal_fatorial(float a){
    int i, result = 1;
    for(i = 1; i < a; i++){
        result *= (i+1);
    }
    return result;
}

float cal_somatorio(float a, int b){
    int i, result = 0;
    for(i = 1; i <= b; i++){
        result += a*2;
    }
    return result;
}