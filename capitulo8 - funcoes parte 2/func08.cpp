//func08.cpp
#include <iostream>
using namespace std;
int main()
{
    int codigo_cliente;
    //cod_cli é o apelido da variável codigo_cliente. Como ambas referem-se ao mesmo
    //endereço de memória, consequentemente, ao mesmo valor
    int &cod_cli = codigo_cliente;
    codigo_cliente = 123;
    cout << "Codigo_cliente = " << codigo_cliente << endl;
    cout << "cod_cli = " << cod_cli << endl << endl;
    cod_cli += 210;
    cout << "Codigo_cliente = " << codigo_cliente << endl;
    cout << "cod_cli = " << cod_cli << endl << endl;
    return 0;
}