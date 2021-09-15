//pointr09.cpp
#include <iostream>
using namespace std;
int main()
{
    int k;
    const int qtde = 5;
    int *ptr_int = new int[5];
    //verifica se a alocação de memória foi feita com sucesso
    if (ptr_int == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        for (k = 0; k < qtde; k++)//Atribui valores ao array dinâmico
            ptr_int[k] = k;
        for (k = 0; k < qtde; k++)//Exibe os valores do array dinâmico
        {
            //Exibe o conteúdo do endereço armazenado em ptr_int
            cout << *ptr_int << " ";
            //Adiciona 4 ao endereço armazenado no ponteiro ptr_int,
            //permitindo referência a um próximo elemento array
            ptr_int = ptr_int + 1;
        }
        delete [ ] ptr_int;//Libera o bloco de memória alocado
        cout << endl;
        return 0;
    }
}