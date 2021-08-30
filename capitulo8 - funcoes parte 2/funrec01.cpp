//funrec01.cpp
#include <iostream>
using namespace std;
void nivel(int);
int main()
{
    nivel(1);
    return 0;
}
void nivel(int numero)
{
    cout << "Nível " << numero << endl;
    if (numero < 4)
        nivel(numero + 1);  //Chamada Recursiva
    cout << "Retorno - nível " << numero << endl;
}