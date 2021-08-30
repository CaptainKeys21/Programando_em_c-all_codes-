//if03.cpp
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Digite um número entre 1 e 9: ";
    cin >> numero;
    if (numero < 1 || numero > 9)
        cout << "Número fora do intervalo" << endl;
    else
        cout << "Número correto" << endl;
    return 0;
}