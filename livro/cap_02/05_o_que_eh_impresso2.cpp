#include <iostream>

using namespace std;

int main(){
    bool a = 1, b = 0;
    int c = 2, d = 4.2;
    float e = 2.1, f = 7.1;
    bool r1, r2;
    int r3, r4, r5;
    r1 = a && b || e > f + !b;
    r2 = f == a || (int)d / (2*2);
    r3 = ((f == a == c && d != (int)d) + c % d);
    r4 = c++ + ++e;
    r5 = (a || b || c || d || f) - a + ++b * c % d;
    cout << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << endl;
    return 0;
}

/*
    r1 = 1 && 0 || 2.1 > 7.1 + 0 ... 0 || 0 ... r1 = 0
    r2 = 7.1 == 1 || 4 / 4 ... 0 || 1 ... r2 = 1
    r3 = (7.1 == 1 == 2 && 4.2 != 4) + 2 % 4.2 ... (7.1 == 0 && 1) + 2 ... (0 && 1) + 2 ... 0 + 2 .. r3 = 2
    r4 = 2++ + ++2.1 ... 2 + 3.1 ... r4 = 5
    r5 = (1 || 0 || 3 || 4.2 || 7.1) - 1 + ++0 * 3 % 4.2 ... 1 - 1 + 1 * 3 % 4.2 ... 1 - 1 + 3 % 4.2 ... 1 - 1 + 3 ... r5 = 3
    
    o que sera impresso:
    0 1 2 5 3
*/