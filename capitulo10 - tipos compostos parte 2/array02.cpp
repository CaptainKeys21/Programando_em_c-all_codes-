//array02.cpp
#include <iostream>
using namespace std;
void mult(int [], int qtdelem); //Protótipo da função mult()
int main()
{
    const int kelem = 6;        //Constante simbólica
    int pares[kelem] = {2, 4, 6, 8, 10, 12};
    int k;
    cout << "Array pares antes da chamada à função mult()" << endl;
    for(k = 0; k < kelem; k++)
        cout << pares[k] << " ";
    cout << endl;
    mult(pares, kelem);
    cout << "Array pares depois da chamada à função mult()" << endl;
    for (k = 0; k < kelem; k++)
        cout << pares[k] << " ";
    cout << endl;
    return 0;
}
void mult(int xpares[], int qtdelem1)   //Definição da função mult()
{
    int k;
    for (k = 0; k <qtdelem1; k++)
        xpares[k] = xpares[k] * 2;
}