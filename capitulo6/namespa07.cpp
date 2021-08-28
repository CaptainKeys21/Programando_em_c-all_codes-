//namespa07.cpp
#include <iostream>
using namespace std;
int ano1 = 2001;        //Variável global
namespace teste         //Criação do namespace teste
{
    int ano2 = 2002;
    int ano1 = 2003;
    void exibe();
}
int main()
{
    cout << "Função main()" << endl;
    cout << "Variável global ano1: " << ano1 << endl;
    cout << "Variável ano1 do namespace teste: " << teste::ano1 << endl;
    cout << "Variável ano2 do namespace teste: " << teste::ano2 << endl << endl;
    teste::exibe();     //Chama a função exibe()
    return 0;
}
void teste::exibe()     //Definição da função exibe()
{
    cout << "Função exibe()" << endl;
    cout << "Variável global ano1: " << ::ano1 << endl;
    cout << "Variável ano1 do namespace teste: " << ano1 << endl;
    cout << "Variável ano2 do namespace teste: " << ano2 << endl;
}