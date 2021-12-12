#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float IMC, peso, altura;
    
    cout << "Digite o seu peso em Kg:" << endl;
    cin >> peso;
    cout << "Digite sua altura em m:" << endl;
    cin >> altura;
    
    IMC = peso/pow(altura,2);
    
    cout << "Seu IMC: " << IMC << endl << endl;
    cout << "VALORES DE IMC" << endl
         << "Abaixo do peso: menor que 18,5;" << endl
         << "Normal: entre 18,5 e 24,9;" << endl
         << "Acima do peso: entre 25 e 29,9;" << endl
         << "Obeso: 30 ou mais." << endl;
    
    return 0;
}