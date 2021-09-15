//struct03.cpp
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
    st_produto produto1;    //Variável-estrutura produto1
    //Leitura de valores
    cout << "Código do produto: ";
    cin >> produto1.pd_cod;
    cout << "Nome do produto: ";
    cin >> produto1.pd_nome;
    cout << "Valor do produto: ";
    cin >> produto1.pd_valor;
    //Exibição de valores
    cout << endl << "Valores dos membros" << endl;
    cout << "Código: " << produto1.pd_cod << endl;
    cout << "Nome: " << produto1.pd_nome << endl;
    cout << "Valor: " << produto1.pd_valor << endl;
    return 0;
}