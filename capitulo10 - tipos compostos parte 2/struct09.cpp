//struct09.cpp
#include <iostream>
#include <cstring>
using namespace std;
struct st_produto           //Gabarito de estrutura externo
{
    int pd_cod;
    char pd_nome[15];
    float pd_valor;
};
//Protótipo da fundação exibe(). Recebe um argumento de tipo st_produto
void exibe(st_produto);
int main()
{
    //variável-estrutura produto1
    st_produto produto1 = {10, "Caneta", 1.5};
    cout << "Estrutura antes da chamada - função main()" << endl;
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Nome: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    exibe(produto1);        //Chama a função exibe()
    cout << "Estrutura antes da chamada - função main()" << endl;
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Nome: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    return 0;
}
//Definição da função exibe(). Exibe a estrutura que lhe é passada no argumento
//formal prod pelo argumento real produto1, que é uma variável-estrutura. Altera os
//valores da cópia da estrutura. As alterações não são refletidas na estrutura original
void exibe(st_produto prod)
{
    cout << "Cópia da estrutura - função exibe()" << endl;
    cout << "Código: " << prod.pd_cod << endl;
    cout << "Nome: " << prod.pd_nome << endl;
    cout << "Valor: " << prod.pd_valor << endl;
    prod.pd_cod = 20;
    strcpy(prod.pd_nome, "Disquete");
    prod.pd_valor = 3.5;
    cout << "Estrutura alterada - função exibe()" << endl;
    cout << "Código: " << prod.pd_cod << endl;
    cout << "Nome: " << prod.pd_nome << endl;
    cout << "Valor: " << prod.pd_valor << endl;
}