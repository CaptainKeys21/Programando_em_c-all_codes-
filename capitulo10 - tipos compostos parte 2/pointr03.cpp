//pointr03.cpp
#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int *ptr_int; //ponteiro para um int
    ptr_int = &x; //Atribui o endereço da variável x ao ponteiro ptr_int
    //Referência pelo nome da variável
    cout << "A variável x contém o valor " << x << endl;
    //Referência via operador de de-referência
    cout << "A variável x contém o valor " << *ptr_int << endl;
    return 0;
}