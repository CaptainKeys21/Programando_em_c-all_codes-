//funrec03.cpp
#include <iostream>
using namespace std;
unsigned int fatorial(int);
int main()
{
    unsigned int result;
    int numero;
    cout << "Digite um número (entre 1 e 8) para o cálculo fatorial: ";
    cin >> numero;
    if (numero < 1 || numero > 8)
    {
        cout << "Número fora do intervalo" << endl;
        return 1;
    }
    else
    {
        result = fatorial(numero);
        cout << "O fatorial de " << numero << " é " << result << endl;
        return 0;
    }
}
unsigned int fatorial(int numero1)
{
    unsigned int fat;
    if (numero1 <=1)
        fat = 1;
    else
        fat = numero1 * fatorial(numero1 - 1);
    return fat;
}