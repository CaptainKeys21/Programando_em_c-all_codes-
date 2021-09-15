//struct06.cpp
#include <iostream>
using namespace std;
int main()
{
    const int kk = 3;       //Quantidade de elementos do array de estruturas
    int i = 0;
    struct st_produto       //Gabarito de estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    //Array de estruturas produtos com kk elementos
    st_produto produtos[kk];
    //Leitura de valores
    for (i = 0; i < kk; i++)
    {
        cout << "Código do produto: ";
        cin >> produtos[i].pd_cod;
        cout << "Nome do produto: ";
        cin >> produtos[i].pd_nome;
        cout << "Valor do produto: ";
        cin >> produtos[i].pd_valor;
        cout << endl;
    }
    //Exibição de valores
    for (i = 0; i < kk; i++)
    {
        cout << "Código: " << produtos[i].pd_cod << endl;
        cout << "Nome: " << produtos[i].pd_nome << endl;
        cout << "Valor: " << produtos[i].pd_valor << endl;
    }
    return 0;
}