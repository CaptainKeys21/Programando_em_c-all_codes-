//if02.cpp
#include <iostream>
using namespace std;
int main()
{
    float media;
    int faltas;
    cout << "Digite sua média final: ";
    cin >> media;
    cout << "Digite a quantidade de faltas: ";
    cin >> faltas;
    cout << endl << "Situação: ";
    if (media > 7.0)
        if (faltas < 10)
            cout << "Aprovado" << endl;
        else
            cout << "Recuperação" << endl;
    else
        cout << "Reprovado" << endl;
    return 0;
}