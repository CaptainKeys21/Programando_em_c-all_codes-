//static03.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:
        static int anofab;  //variável-membro static
    private:
        char marca[12];
        char modelo[7];
};
//Definição da variável-membro static anofab, sem inicialização
int carro :: anofab;
int main()
{
    carro :: anofab = 2002;
    cout << "Ano: " << carro :: anofab << endl;
    return 0;
}