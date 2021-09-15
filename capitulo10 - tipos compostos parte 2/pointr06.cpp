//pointr06.cpp
#include <iostream>
using namespace std;
int main()
{
    //Aloca um bloco de memória para armazenar 5 valores do tipo int e atribui o
    //endereço inicial do bloco (ou o endereço do primerio elemento do array) ao
    //ponteiro ptr_ int
    int *ptr_int = new int[5];
    //verifica se a locação de memória foi feita com sucesso
    if (ptr_int == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        //atribui valores ao array dinâmico
        ptr_int[0] = 0;
        ptr_int[1] = 1;
        ptr_int[2] = 2;
        ptr_int[3] = 3;
        ptr_int[4] = 4;
        //exibe os valores do array dinâmico
        cout << ptr_int[0] << " ";
        cout << ptr_int[1] << " ";
        cout << ptr_int[2] << " ";
        cout << ptr_int[3] << " ";
        cout << ptr_int[4] << endl;
        delete[] ptr_int; //Libera o bloco de memória alocado
        return 0;
    }
}