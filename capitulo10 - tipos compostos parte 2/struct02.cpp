//struct02.cpp
#include <iostream>
#include <cstring>          //Para a função strcpy()
using namespace std;
int main()
{
    //A função strcpy() copia strings de um local para outro
    struct st_produto       //Gabarito de estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    st_produto produto1;    //Variável-estrutura produto1
    //Atribui valores à variável-estrutura produto1
    produto1.pd_cod = 10;
    strcpy(produto1.pd_nome, "Caneta");
    produto1.pd_valor = 1.5;
    //Exibe os valores dos membros
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Nome: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    //O membro pd_nome, por ser um array de caracteres pode ser
    //manipulado caractere a caractere por meio de índices
    return 0;
}