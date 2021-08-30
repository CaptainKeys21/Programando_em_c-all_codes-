//while03.cpp
#include <iostream>
using namespace std;
int main()
{
    int k, numero;
    cout << "Digite um número maior que 0: ";
    cin >> numero;
    k = numero;
    while(k)
    {
        cout << "k = " << k << endl;
        k--;
    }
    return 0;
}