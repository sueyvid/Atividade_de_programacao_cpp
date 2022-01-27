#include <iostream>

using namespace std;

const int SMAX = 99;

int main()
{
    char str[SMAX], string[SMAX];
    int i = 0, j = 0;
    while(str[j] != '\0'){
        cin.getline(str, SMAX);
        while(str[j] != '\0'){
            string[i] = str[j];
            i++;
            j++;
        }
        j = 0;
    }
    string[i] = '\0';
    cout << string;
    return 0;
}