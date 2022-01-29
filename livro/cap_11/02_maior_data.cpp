#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

Data maiorData(Data d1, Data d2);

int main()
{
    Data d1, d2;
    cout << "Digite o dia, mês e ano da primeira data:" << endl;
    cin >> d1.dia >> d1.mes >> d1.ano;
    cout << "Digite o dia, mês e ano da segunda data:" << endl;
    cin >> d2.dia >> d2.mes >> d2.ano;
    cout << "Maior data:" << endl;
    if(maiorData(d1, d2).dia < 10){
        cout << "0";
    }
    cout << maiorData(d1, d2).dia << "/";
    if(maiorData(d1, d2).mes < 10){
        cout << "0";
    }
    cout << maiorData(d1, d2).mes << "/";
    if(maiorData(d1, d2).ano < 1000){
        cout << "0";
    }
    if(maiorData(d1, d2).ano < 100){
        cout << "0";
    }
    if(maiorData(d1, d2).ano < 10){
        cout << "0";
    }
    cout << maiorData(d1, d2).ano;

    return 0;
}

Data maiorData(Data d1, Data d2){
    if(d1.ano > d2.ano){
        return d1;
    }
    else if(d2.ano > d1.ano){
        return d2;
    }
    else{
        if(d1.mes > d2.mes){
            return d1;
        }
        else if(d2.mes > d1.mes){
            return d2;
        }
        else{
            if(d1.dia > d2.dia){
                return d1;
            }
            else if(d2.dia > d1.dia){
                return d2;
            }
        }
    }
    return d1;
}