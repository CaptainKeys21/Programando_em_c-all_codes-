//bitwis04.cpp
#include <iostream>
using namespace std;
int main()
{
    signed short int valor1 = 12;
    cout << "Antes da negação: " << valor1 << endl;
    valor1 = ~valor1;
    cout << "Depois da negação: " << valor1 << endl;
    return 0;
}