//pointr11.cpp
#include <iostream>
using namespace std;
int main()
{
    int pares[4] = {10, 20, 30, 40};
    int k;
    for (k = 0; k < 4; k++)
    {
        cout << "O endereço do elemento " << k << "é: " << &pares[k];
        cout << " (valor " << pares[k] << ")" << endl;
    }
    return 0;
}