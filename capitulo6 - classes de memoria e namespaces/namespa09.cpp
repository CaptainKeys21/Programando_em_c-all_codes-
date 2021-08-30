//namespa09.cpp
#include <iostream>
using namespace std;
void exibe();           //Protótipo da função exibe()
namespace nivel19
{
    int valor9 = 100;
}
namespace               //Namespace anônimo
{
    int valor2 = 200;
}
int main()
{
    cout << "Função main()" << endl;
    cout << "Variável valor9 do namespace nivel19: " << nivel19::valor9 << endl;
    cout << "Variável valor2 do namespace anônimo: " << valor2 << endl << endl;
    exibe();            //Chama a função exibe()
    return 0;
}
void exibe()            //Definição da função exibe()
{
    cout << "Função exibe()" << endl;
    cout << "Variável valor 2 do namespace anônimo: " << valor2 << endl;
}