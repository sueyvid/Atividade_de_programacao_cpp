#include <iostream>

using namespace std;

const int SMAX = 99;

int main()
{
    char s1[SMAX], s2[SMAX];
    int p, q, i, j = 0;
    cin.getline(s1, SMAX);
    cin >> p >> q;
    for(i = p; i <= q; i++){
        s2[j] = s1[i];
        j++;
    }
    s2[j] = '\0';
    cout << "Substring: " << s2;
    return 0;
}