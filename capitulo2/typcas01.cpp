//typcas01.cpp
#include <iostream>
using namespace std;
int main()
{
    // Conversão automática para o tipo int. Os valores 1.6 e 2.5 são
    // adicionados resultando em 4.1, mas com truncamento para 4.
    int valor1, valor2, valor3;
    valor1 = 1.6 + 2.5;
    cout <<"valor1 = " << valor1 << endl;

    // O typecast é feito antes da adição, convertendo os valores 1.6 e 2.5
    // em 1 e 2, respectivamente e então adicionados.
    valor2 = int(1.6) + int(2.5);
    cout << "valor2 = " << valor2 << endl;

    // A adição é efetuada (como no primeiro caso) e então feito o typecast.
    // No primeiro caso a conversão é automática e neste não, é forçada.
    valor3 = int(1.6 + 2.5);
    cout << "valor3 = " << valor3 << endl;
    return 0;
}