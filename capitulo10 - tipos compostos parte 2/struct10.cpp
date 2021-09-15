//struct10.cpp
#include <iostream>
#include <cstring>
using namespace std;
struct st_produto           //Gabarito de estrutura externo
{
    int pd_cod;
    char pd_nome[15];
    float pd_valor;
};
//Protótipo da fundação altera() com um ponteiro para o tipo st_produto
void altera(st_produto *);
int main(){
    //Variável-estrutura produto1
    st_produto produto1 = {10, "Caneta", 1.5};
    cout << "Estrutura antes da chamada" << endl;
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Name: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    //Chama a função altera() passando o endereço da estrutura
    altera(&produto1);
    cout << "Estrutura depois da chamada" << endl;
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Name: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    return 0;
}
void altera(st_produto * prod)//Definição da função altera()
{
    //Referência aos membros da estrutura feita por meio do operado ->
    //pelo fato de se utilizar um ponteiro para a estrutura
    prod -> pd_cod = 20;
    strcpy(prod -> pd_nome, "Lapiseira");
    prod -> pd_valor = 3.5;
}