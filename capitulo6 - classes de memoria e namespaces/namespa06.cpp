//namespa06.cpp
#include <iostream>
using namespace std;
int ano1 = 2001;    //variável global
namespace teste     //Criação do namespace teste
{
    int ano2 = 2002;
    int ano1 = 2003;
}
int main()
{
    cout << "Variável global ano1: " << ano1 << endl;
    cout << "Variável ano1 do namespace teste: " << teste::ano1 << endl;
    cout << "Variável ano2 do namespace teste: " << teste::ano2 << endl;
    return 0;
}