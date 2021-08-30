//while04.cpp
#include <iostream>
using namespace std;
int main()
{
    char resp = 's';
    int numero1, numero2, total;

    while (resp == 's' || resp == 'S')      //Expressão lógica
    {
        cout << "Número 1: ";
        cin >> numero1;
        cout << "Número 2: ";
        cin >> numero2;
        total = numero1 + numero2;
        cout << "O total é: " << total;
        cout << endl;
        cout << "Continuar? (s/n): ";
        cin >> resp;
    }
    return 0;
}