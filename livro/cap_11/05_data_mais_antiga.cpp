#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

int maisAntiga(Data d1, Data d2);

int main()
{
    Data d1, d2;
    
    cout << "Digite a primeira data:" << endl;
    cin >> d1.dia;
    cin >> d1.mes;
    cin >> d1.ano;

    cout << "Digite a segunda data:" << endl;
    cin >> d2.dia;
    cin >> d2.mes;
    cin >> d2.ano;
    
    if(maisAntiga(d1, d2) > 0){
        cout << "A primeira data é a mais antiga";
    }
    else if(maisAntiga(d1, d2) < 0){
        cout << "A segunda data é a mais antiga";
    }
    else{
        cout << "As duas datas são iguais";
    }
    
    return 0;
}

int maisAntiga(Data d1, Data d2){
    if(d1.ano < d2.ano){
        return 1;
    }
    if(d2.ano < d1.ano){
        return -1;
    }
    else{
        if(d1.mes < d2.mes){
            return 1;
        }
        if(d2.mes < d1.mes){
            return -1;
        }
        else{
            if(d1.dia < d2.dia){
                return 1;
            }
            if(d2.dia < d1.dia){
                return -1;
            }
        }
    }
    return 0;
}