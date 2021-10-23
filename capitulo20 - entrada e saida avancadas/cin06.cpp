//cin06.cpp
#include <iostream>
using namespace std;
int main()
{
    int numero;
    int somat = 0;
    cout << "Digite alguns numeros: " << endl;
    while (cin >> numero)
        somat = somat + numero;
    cout << "Ultimo número digitado: " << numero << endl;
    cout << "Somatório: " << somat << endl;
    return 0;
}