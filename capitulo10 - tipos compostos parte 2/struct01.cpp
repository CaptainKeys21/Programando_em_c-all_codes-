//struct01.cpp
#include <iostream>
using namespace std;
int main()
{
    struct st_produto //Gabarito da estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    //Declaração e inicialização da variável-estrutura produto1
    st_produto produto1 = {10, "Caneta", 1.5};
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Nome: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    return 0;
}