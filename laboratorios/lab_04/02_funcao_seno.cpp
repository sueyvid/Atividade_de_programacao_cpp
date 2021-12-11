#include <iostream>
#include <cmath>

using namespace std;

float qual_seno_do_angulo(float x, int n);
int qual_o_fatorial(int y);

int main()
{
    float alfa;
    int num_termos;
    cin >> alfa >> num_termos;
    cout << qual_seno_do_angulo(alfa, num_termos);

    return 0;
}

int qual_o_fatorial(int y){
    int j, r = 0;
    for(j = 1; j < y; j++){
        r = j*(j+1);
    }
    return r;
}

float qual_seno_do_angulo(float x, int n){
    int i, sen = 0, fat;
    
    x *= M_PI/180;
    for(i = 0; i < n; i++){
        fat = (2*i+1);
        
        sen += pow(-1, i)*pow(x, fat)/qual_o_fatorial(fat);
    }
    cout << sen << endl;
    return sen;
}