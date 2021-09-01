//array02.cpp
#include <iostream>
using namespace std;
int main()
{
    int numeros[5], k;
    for (k = 0; k < 5; k++)
    {
        cout << "Digite um número inteiro: ";
        cin >> numeros[k];
    }
    cout << "Valores armazenados no array: ";
    for (k = 0; k < 5; k++)
        cout << numeros[k] << endl;
    cout << endl;
    return 0;
}