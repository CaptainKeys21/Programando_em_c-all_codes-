//friend04.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                                 //Declaração da classe carro
{
    public:
        carro(char *, char *, int, char *); //Protótipo do construtor
        ~carro();                           //Protótipo do destrutor
        void exibe();                       //Protótipo do método exibe()
        friend class fcarro;                //Classe amiga da classe carro
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
class fcarro                                //Declaração da classe amiga fcarro
{
    public:
        void altera1(carro &);              //Protótipo do método altera1()
        void altera2(carro &);              //Protótipo do método altera2()
};
int main()
{
    //Cria o objeto carro1 da classe carro, chamando o construtor
    carro carro1("GM", "Corsa", 1999, "DEL-0001");
    //Cria o objeto fcarro1 da classe fcarro
    fcarro fcarro1;
    cout << "Antes da alteração" << endl;
    carro1.exibe();
    //Passagem do argumento ao método altera1(), por referência, pois esse
    //altera as variáveis-membro da classe carro
    fcarro1.altera1(carro1);
    cout << "Depois da alteração" << endl;
    carro1.exibe();
    //Passagem do argumento ao método altera2(), por referência, pois esse
    //altera as variáveis-membro daa classe carro
    fcarro1.altera2(carro1);
    carro1.exibe();
    return 0;
}
//Métodos daa classe carro
void carro :: exibe()               //Definição do método exibe()
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
carro :: ~carro()                   //Definição do destrutor
{
}
//Métodos da classe amiga fcarro
void fcarro :: altera1(carro & c1)  //Definição do método altera1()
{
    strcpy(c1.marca, "Ford");
    strcpy(c1.modelo, "Focus");
    c1.anofab = 2000;
    strcpy(c1.placa, "ESC-2222");
}
void fcarro :: altera2(carro & c2)  //Definição do método altera2()
{
    strcpy(c2.marca, "Fiat");
    strcpy(c2.modelo, "Palio");
    c2.anofab = 2001;
    strcpy(c2.placa, "TCP-0001");
}