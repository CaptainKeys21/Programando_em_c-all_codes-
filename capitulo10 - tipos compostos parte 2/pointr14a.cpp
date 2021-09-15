//pointr14a.cpp
#include <iostream>
using namespace std;
int *ptr;               //Ponteiro global
void exibe();
int main()
{
    ptr = new int[3];   //Inicialização do ponteiro com o endereço do bloco
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    cout << "Função main(): ";
    cout << ptr[0] << " ";
    cout << ptr[1] << " ";
    cout << ptr[2] << endl;
    exibe();            //Chama a função exibe()
    delete [ ] ptr;     //Libera o bloco de memória alocado
    return 0;
}