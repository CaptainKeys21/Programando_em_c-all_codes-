//struct11.cpp
#include <iostream>
using namespace std;
//Protótipo da função reajuste(). Recebe um argumento float & que
//indica uma referência (ou apelido) para um tipo float
void reajuste(float &);
int main()
{
    struct st_produto           //Gabarito de estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    //variável-estrutura produto1
    st_produto produto1 = {10, "Caneta", 1.5};
    //chama a função reajuste(). O endereço do argumento real (membro pd_valor)
    //é passado para o argumento formal valor
    reajuste(produto1.pd_valor);
    return 0;
}
void reajuste(float &valor)     //Definição da função reajuste()
{
    //o argumento formal valor é um apelido para um membro do tipo float
    //de uma estrutura, no caso, para o membro pd_valor
    valor = valor * 1.3;
    cout << "Novo valor " << valor << endl;
}