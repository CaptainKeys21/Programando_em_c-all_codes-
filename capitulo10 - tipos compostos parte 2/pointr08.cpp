//pointr08.cpp
#include <iostream>
using namespace std;
int main()
{
    int k, qtde;
    //Aloca um bloco de memória para armazenar valores do tipo int e atribui o
    //endereço inicial do bloco (ou o endereço do primeiro elemento array) ao
    //ponteiro ptr_int. O bloco de memória varia conforme a quantidade digitada
    cout << "Digite a quantidade de elementos do array: ";
    cin >> qtde;
    int *ptr_int = new int[qtde];
    //verifica se a alocação de memória foi feita com sucesso
    if (ptr_int == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        for (k = 0; k < qtde; k++) //Atribui valores ao array dinâmico
            ptr_int[k] = k;
        for (k = 0; k < qtde; k++) //Exibe os valores do array dinâmico
            cout << ptr_int[k] << " ";
        delete[] ptr_int; //Libera o bloco de memória alocado
        cout << endl;
        return 0;
    }
}