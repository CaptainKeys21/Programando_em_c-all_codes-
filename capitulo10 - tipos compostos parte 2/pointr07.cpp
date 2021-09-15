//pointr07.cpp
#include <iostream>
using namespace std;
int main()
{
    int *ptr_int = new int[5];
    int k;
    //verifica se a alocação de memória foi feita com sucesso
    if (ptr_int == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        for (k = 0; k < 5; k++) //Atribui os valores ao array dinâmico
            ptr_int[k] = k;
        for (k = 0; k < 5; k++) //Exibe os valores do array dinâmico
            cout << ptr_int[k] << " ";
        delete[] ptr_int;
        cout << endl;
        return 0;
    }
}