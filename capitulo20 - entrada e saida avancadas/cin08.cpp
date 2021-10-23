//cin08.cpp
#include <iostream>
using namespace std;
int main()
{
    int numero;
    int somat = 0;
    cout << "Digite alguns números: " << endl;
    while (cin >> numero)
        somat = somat + numero;
    cout << "Último número digitado: " << numero << endl;
    cout << "Somatório: " << somat << endl;
    if (cin.fail())
        cout << "Programa terminado. Dados inválidos." << endl;
    return 0;