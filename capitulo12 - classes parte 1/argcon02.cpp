//argcon02.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:
        char marca[12];
        char modelo[7];
        int anofab;
        void exibe(const int *);    //Protótipo do método exibe()
};
int main()
{
    carro carro1;           //Cria o objeto carro1
    //Atribui valores ao objeto carro1
    strcpy(carro1.marca, "Volkswagen");
    strcpy(carro1.modelo, "Gol");
    carro1.anofab = 1999;
    cout << "Objeto carro1" << endl;
    //Chama o método exibe() passando como argumento o endereço da variável-membro anofab
    carro1.exibe(&carro1.anofab);
    return 0;
}
//Definição do método exibe(). Exibe os valores do objeto carro1
void carro :: exibe(const int *anofab1)
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    //*anofab1 = 2002;
}
//A linha "*anofab = 2002;" é uma tentativa de alteração do valor da variável-membro anofab.
//Tentativa que implicará um erro na compilação, pois ela é um argumento const.