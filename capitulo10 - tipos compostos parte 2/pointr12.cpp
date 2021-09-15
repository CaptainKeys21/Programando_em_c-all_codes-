//pointr12.cpp
#include <iostream>
using namespace std;
void exibe(int *);      //protótipo da função exibe()
int main()
{
    //Aloca um bloco de memória para armazenar 3 valores do tipo int e atribui o
    //endereço inicial do bloco (ou o endereço do primeiro elemento do array) ao
    //ponteiro ptr
    int *ptr = new int[3];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    cout << "função main(): ";
    cout << ptr[0] << " ";
    cout << ptr[1] << " ";
    cout << ptr[2] << endl;
    exibe(&ptr[0]);     //Ou exibe(ptr);. Chama a função exibe()
    delete [ ] ptr;     //Libera o bloco de memória alocado
    return 0;
}
void exibe(int *ender)  //Definição da função exibe()
{
    cout << "Função exibe(): ";
    cout << ender[0] << " ";
    cout << ender[1] << " ";
    cout << ender[2] << endl;
}