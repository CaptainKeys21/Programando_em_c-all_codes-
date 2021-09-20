//class08.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                         //Declaração da classe carro
{
    public:
        carro(char *, char *, int, char*);  //Protótipo do construtor
        carro();                            //Protótipo do construtor default
        ~carro();                           //Protótipo do destrutor
        void exibe();                       //Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
int main()
{
    //Cria os objetos carro1 e carro2, chamando o construtor
    carro carro1("GM", "Corsa", 1999, "DEL-0001");
    carro carro2("Ford", "Focus", 2000, "DIR-3456");
    //Cria o objeto carro3 sem inicializá-lo, por causa do construtor default
    carro carro3;
    carro1.exibe();
    carro2.exibe();
    carro3.exibe();
    return 0;
}
void carro :: exibe()                       //Definição do método exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl << endl;
}
//Definição do construtor
carro :: carro(char * marc1, char * model1, int ano1, char * plac1)
{
    strcpy(marca, marc1);
    strcpy(modelo, model1);
    anofab = ano1;
    strcpy(placa, plac1);
}
carro :: carro()                            //Definição do construtor default
{}
carro :: ~carro()                           //Definição do destrutor
{
    cout << "Destruindo o objeto... " << modelo << endl;
}