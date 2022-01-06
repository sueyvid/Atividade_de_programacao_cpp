#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int gera_int_intervalo(int p, int q){
    return p + rand() % (q-p+1);
}

float gera_real_intervalo(float p, float q){
    return p + (rand()/float(RAND_MAX))*(q-p);
}

char gera_carac_teclado(){
    return gera_int_intervalo(33,126);
}

int main()
{
    float i, x;
    srand(time(0));
    
    for(i = 0; i < 5; i++){
        cout << gera_carac_teclado() << endl;
    }
    
    //cout << rand() << endl;
    return 0;
}
