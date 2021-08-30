//contin01.cpp
#include <iostream>
using namespace std;
int main()
{
    int numero;
    int somat =0;
    for (int k = 1; k < 6; k++)
    {
        cout << "Digite um número inteiro: ";
        cin >> numero;
        if (numero < 0)
            continue;
        somat = somat + numero;
    }
    cout << "Somatório: " << somat << endl;
    return 0;
}