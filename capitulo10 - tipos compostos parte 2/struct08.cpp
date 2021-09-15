//struct08.cpp
#include <iostream>
using namespace std;
int main()
{
    struct st_data          //Gabarito de estrutura
    {
        char dt_dia[3];
        char dt_mes[3];
        int dt_ano;
    };
    struct st_pessoa        //Gabarito de estrutura
    {
        char ps_nome[6];
        //Estrutura aninhada: o membro ps_data é do tipo st_data
        st_data ps_data;
    };
    //Pessoa é uma variável-estrutura do tipo st_pessoa
    st_pessoa pessoa = {"Bill", "28", "10", 1950};
    cout << pessoa.ps_nome << endl;
    cout << pessoa.ps_data.dt_dia << "/";
    cout << pessoa.ps_data.dt_mes << "/";
    cout << pessoa.ps_data.dt_ano << endl;
    return 0;
}