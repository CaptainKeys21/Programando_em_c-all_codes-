//pointr10.cpp
#include <iostream>
using namespace std;
int main()
{
    int pares[4] = {10, 20, 30, 40};
    int *ptr1;//ponteiro para um int
    int *ptr2;//ponteiro para um int
    //As duas linhas seguintes são equivalentes: armazenam no respectivo
    //ponteiro o endereço do primeiro elemento do array pares
    ptr1 = pares;
    ptr2 = &pares[0];
    cout << "O endereço do primeiro elemento é: " << ptr1 << endl;
    cout << "O endereço do primeiro elemento é: " << ptr2 << endl;
    return 0;
}