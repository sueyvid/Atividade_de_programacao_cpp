/*
    #include <iostream>
    #include <cmath>

    using namespace std;

    int main (){
        int x = 4, y = 8;
        double d = 1.5;
        float e = 5.0;
        int r1 , r2;
        double r3 , r4;
        r1 = ++x % y;                               //r1 = 5%8 == 5
        r2 = d * e + x / y --;                      //r2 = (1.5 * 5.0) + (4/8)-- == 7.5 + 0.5-- == 7.5 - 0.5 = 7
        r3 = pow(e, 2.0) / 3;                       //r3 = pow(5.0, 2.0) / 3 == 25.0/3 == 8.33333
        r4 = abs(d-e) - ceil(4 + r1 % (int)r3);     //r4 = abs(1.5-5.0) - ceil(4 + 5 % 8) == abs(-3.5) - ceil(4+5) == 
        cout << "Saida do programa: " << endl;       
        cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl ;
        return 0;
    }

    //Saida do programa:
    //5 7 8.33333 ?
*/