//pointr02.cpp
#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int * ptr_int;  //Ponteiro para um int
    ptr_int = &x;   //Atribui o endereço da variável x ao ponteiro ptr_int
    cout << "A variável x contém o valor " << x;
    cout << " e está no endereço " << ptr_int << endl;
    return 0;
}