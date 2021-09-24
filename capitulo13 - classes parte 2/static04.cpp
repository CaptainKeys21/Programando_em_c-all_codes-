//static04.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe carro
{
    public:
        static void exibe();    //Protótipo do método static exibe()
    private:
        char marca[12];
        char modelo[7];
        static int anofab;      //Variável-membro static
};
//Inicializa a variável-membro static anofab
int carro :: anofab = 2000;
int main()
{
    //Chama o método static exibe() sem a existência de objetos
    //da classe carro. Acessa a variável compartilhada anofab
    carro :: exibe();
    return 0;
}
void carro :: exibe()           //Definição do método static exibe()
{
    cout << "Ano: " << anofab << endl;
}