//struct05.cpp
#include <iostream>
#include <cstring>      //Para a função strcpy()
using namespace std;
int main()
{
    //A função strcpy() copia strings de um local para outro
    struct st_produto   //Gabarito de estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    //Array de estruturas produtos com 2 elementos
    st_produto produtos[2];
    //Atribui valores ao array produtos
    produtos[0].pd_cod = 10;
    strcpy(produtos[0].pd_nome, "Caneta");
    produtos[0].pd_valor = 1.5;
    produtos[1].pd_cod = 11;
    strcpy(produtos[1].pd_nome, "Caderno");
    produtos[1].pd_valor = 2.5;
    //Exibe os valores do array produtos
    cout << "Código: " << produtos[0].pd_cod << endl;
    cout << "Nome: " << produtos[0].pd_nome << endl;
    cout << "Valor: " << produtos[0].pd_valor << endl << endl;
    cout << "Código: " << produtos[1].pd_cod << endl;
    cout << "Nome: " << produtos[1].pd_nome << endl;
    cout << "Valor: " << produtos[1].pd_valor << endl;
    return 0;
}