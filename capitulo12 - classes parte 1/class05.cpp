//class05.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:
        carro(char *, char *, int, char*);  //Protótipo do construtor
        void exibe();       //Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
int main ()
{
    //Cria o objeto carro1, chamando o construtor
    carro carro1("GM", "Corsa", 1999, "DEL-0001");
    carro1.exibe();         //Objeto carro1 chama o método exibe()
    return 0;
}
//Definição do método exibe(). Exibe os valores do objeto Carro1
void carro :: exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl;
}
//Definição do construtor, inicializa o objeto carro1
carro :: carro(char * marca1, char * modelo1, int ano1, char * placa1)
{
    strcpy(marca, marca1);
    strcpy(modelo, modelo1);
    anofab = ano1;
    strcpy(placa, placa1);
}