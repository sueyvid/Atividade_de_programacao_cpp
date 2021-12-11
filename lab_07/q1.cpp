#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tam, i, xi2 = 0, xi = 0, yi = 0, xiyi = 0;
    cin >> tam;
    int x[tam], y[tam];
    float a1, a0;
    
    for(i = 0; i < tam; i++){
        cin >> x[i];
    }
    
    for(i = 0; i < tam; i++){
        cin >> y[i];
    }
    
    for(i = 0; i < tam; i++){
        a0 += (pow(x[i],2)*y[i]-x[i]*y[i]*x[i])/(i*pow(x[i],2)-x[i]);
        a1 += (i*x[i]*y[i]-x[i]*y[i])/(i*pow(x[i],2)-x[i]);
    }
    /*
    for(i = 0; i < tam; i++){
        xi2 += pow(x[i],2);
        xi += x[i];
        yi += y[i];
        xiyi += x[i]*y[i];
    }
    
    cout << xi2 << " " << xi << " " << yi << " " << xiyi << endl;
    a0 = (xi2*yi-xiyi*xi)/(tam*xi2-xi);
    a1 = (tam*xiyi-xi*yi)/(tam*xi2-xi);
    //a0 += (pow(x[i],2)*y[i]-x[i]*y[i]*x[i])/(i*pow(x[i],2)-x[i]);
    //a1 += (i*x[i]*y[i]-x[i]*y[i])/(i*pow(x[i],2)-x[i]);
    */
    cout << "a1 = " << a1 << " a0 = " << a0;
    
    return 0;
}