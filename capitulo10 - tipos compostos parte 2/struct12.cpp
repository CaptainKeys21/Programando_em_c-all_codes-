//struct12.cpp
#include <iostream>
using namespace std;
struct st_produto               //Gabarito de estrutura
{
    int pd_cod;
    char pd_nome[15];
    float pd_valor;
};
st_produto ret_struct();        //Protótipo da função ret_struct()
int main()
{
    st_produto produto1;        //variável-estrutura produto1
    produto1 = ret_struct();    //chama a função ret_struct()
    cout << "Estrutura retornada - função main()" << endl;
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Nome: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    return 0;
}
//Defição da função ret_truct(). Armazena os valores digitados na variável-
//estrutura produto2, que é retornada à função main() e recebida na variável-
//estrutura produto1, que é exibida, comprovando o retorno
st_produto ret_struct()
{
    st_produto produto2;        //variável-estrutura produto2
    cout << "Código do produto: ";
    cin >> produto2.pd_cod;
    cout << "Nome do produto: ";
    cin >> produto2.pd_nome;
    cout << "Valor do produto: ";
    cin >> produto2.pd_valor;
    return produto2;
}