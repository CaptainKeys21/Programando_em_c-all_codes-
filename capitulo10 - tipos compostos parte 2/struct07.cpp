//struct07.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct st_produto       //Gabarito de estrutura
    {
        int pd_cod;
        char pd_nome[4];
    };
    //Array de estruturas produtos com 2 elementos
    st_produto produtos[2];
    //Atribui valores ao array produtos
    produtos[0].pd_cod = 20;
    strcpy(produtos[0].pd_nome, "MEL");
    produtos[1].pd_cod = 11;
    strcpy(produtos[1].pd_nome, "GIZ");
    //Exibe cada elemento do array produtos caracter a caractere
    int j, k = 0;
    for (j = 0; j < 2; j++)
    {
        while (produtos[j].pd_nome[k] != '\0')
        {
            cout << produtos[j].pd_nome[k] << endl;
            k++;
        }
        cout << endl;
        k = 0;
    }
    return 0;
}