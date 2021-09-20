//metcon01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe carro
{
    public:
        char marca[12];
        char modelo[7];
        int anofab;
        void exibe() const;     //Protótipo do método exibe()
};
int main()
{
    carro carro1;               //Cria o objeto carro1
    //Atribui valores ao objeto carro1
    strcpy(carro1.marca, "Volkswagen");
    strcpy(carro1.modelo, "Gol");
    carro1.anofab = 1999;
    cout << "Objeto carro1" << endl;
    carro1.exibe();             //Objeto carro1 chama o método exibe()
    return 0;
}
//Definição do método exibe(). Exibe os valores do objeto carro1
void carro :: exibe() const
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    //anofab = 8888;
    cout << "Ano: " << anofab << endl;
}
//A linha "anofab = 8888;" se usada, causará um erro na compilação, pois o método exibe() é const.