//static01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe carro
{
    public:
        carro(char *, char *);  //Protótipo do construtor
        ~carro();               //Protótipo do destrutor
        void exibe();           //Protótipo do método exibe()
        void atrib(int);        //Protótipo do método atrib()
    private:
        char marca[12];
        char modelo[7];
        static int anofab;      //Variável-membro static
};
int carro :: anofab = 0;        //Inicializa a variável-membro static anofab
int main()
{
    //Cria os objetos carro1 e carro2, chamando o construtor. Esses objetos compartilham
    // o valor da variável membro anofab, no caso, 2001
    carro carro1("GM", "Corsa");
    carro carro2("Ford", "Focus");
    carro1.atrib(2001);
    carro1.exibe();
    carro2.exibe();
    return 0;
}
void carro :: exibe()           //Definição do método exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl << endl;
}
void carro :: atrib(int ano1)   //Definição do método atrib()
{
    anofab = ano1;
}
//Definição do construtor
carro :: carro(char * marc1, char * model1)
{
    strcpy(marca, marc1);
    strcpy(modelo, model1);
}
carro :: ~carro()               //Definição do destrutor
{
}