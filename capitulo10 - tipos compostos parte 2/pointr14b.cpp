//pointr14b.cpp
#include <iostream>
using namespace std;
extern int *ptr;    //Redeclaração do ponteiro global ptr
void exibe()        //Definição da função exibe()
{
    cout << "Função exibe(): ";
    cout << ptr[0] << " ";
    cout << ptr[1] << " ";
    cout << ptr[2] << endl;
}