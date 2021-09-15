//pointr05.cpp
#include <iostream>
using namespace std;
int main()
{
    //Aloca um bloco de memória para conter um valor do tipo int e
    //armazena o endereço inicial do bloco no ponteiro ptr_int
    int *ptr_int = new int;
    //verifica se a alocação de memória foi feita com sucesso
    if (ptr_int == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        //Atribui o valor 32 ao endereço de memória armazenado em ptr_int
        *ptr_int = 32;
        cout << "O conteúdo do endereço " << ptr_int << " é " << *ptr_int << endl;
        cout << "O bloco de memória alocado tem " << sizeof(*ptr_int) << " bytes" << endl;
        delete ptr_int;
        return 0;
    }
}