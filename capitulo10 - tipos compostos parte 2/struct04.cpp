//struct04.cpp
#include <iostream>
using namespace std;
int main()
{
    struct st_produto       //Gabarito de estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    st_produto produto1 = {11, "Caderno", 2.5};
    st_produto produto2;
    //Atribui a variável-estrutura produto1 à variável-estrutura produto2
    produto2 = produto1;
    cout << "variável-estrutura produto2" << endl;
    cout << "Código: " << produto2.pd_cod << endl;
    cout << "Nome: " << produto2.pd_nome << endl;
    cout << "Valor: " << produto2.pd_valor << endl;
    return 0;
}