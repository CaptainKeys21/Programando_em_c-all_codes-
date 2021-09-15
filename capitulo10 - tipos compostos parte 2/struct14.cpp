//struct14.cpp
#include <iostream>
using namespace std;
int main()
{
    struct st_produto       //Gabarito da estrutura
    {
        int pd_cod;
        char pd_nome[15];
        float pd_valor;
    };
    //Ponteiro para a estrutura, inicializado
    st_produto *ptr = new st_produto;
    cout << "Código do produto: ";
    cin >> (*ptr).pd_cod;
    cout << "Nome do produto: ";
    cin >> ptr -> pd_nome;
    cout << "Valor do produto: ";
    cin >> ptr -> pd_valor;
    cout << endl << "Valores digitados: ";
    cout << ptr -> pd_cod << " ";
    cout << ptr -> pd_nome << " ";
    cout << (*ptr).pd_valor << endl;
    delete ptr;
    return 0;
}