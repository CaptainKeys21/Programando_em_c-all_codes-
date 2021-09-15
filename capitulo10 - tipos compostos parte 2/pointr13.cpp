//pointr13.cpp
#include <iostream>
using namespace std;
int *ptr;           //Ponteiro global
void exibe();       //Protótipo da função exibe()
int main()
{
    ptr = new int[3];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    cout << "Função main(): ";
    cout << ptr[0] << " ";
    cout << ptr[1] << " ";
    cout << ptr[2] << endl;
    exibe();        //Chama a função exibe()
    delete [ ] ptr; //Libera o bloco de memória alocado
    return 0;
}
void exibe()        //Definição da função exibe()
{
    cout << "Função exibe(): ";
    cout << ptr[0] << " ";
    cout << ptr[1] << " ";
    cout << ptr[2] << endl;
}