//for04.cpp
#include <iostream>
using namespace std;
int main()
{
    int k, numero;
    cout << "Digite um número maior que 0: ";
    cin >> numero;

    for (k = numero; k; k--)
        cout << "k = " << k << endl;
    return 0;
}