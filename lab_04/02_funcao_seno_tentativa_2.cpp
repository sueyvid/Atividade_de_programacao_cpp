#include <iostream>
#include <cmath>

using namespace std;

float sen_angulo(float angulo, int n);
int qual_o_fatorial(int y);

int main()
{
    int termos;
    float x;
    cin >> x >> termos;
    cout << "sen(" << x << ") = " << sen_angulo(x, termos);
    return 0;
}

int qual_o_fatorial(int y){
    int j, r = 1;
    for(j = 1; j <= y; j++){
        r *= j;
    }
    return r;
}

float sen_angulo(float angulo, int n){
    int i;
    float result = 0;
    
    angulo *= M_PI/180;
    for(i = 0; i < n; i++){
        result += pow(-1,i)*pow(angulo,2*i+1)/qual_o_fatorial(2*i+1);
    }
    return result;
}