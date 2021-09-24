//friend06.cpp
#include <iostream>
#include <cstring>
using namespace std;
class fcarro;
class carro                                 //Declaração da classe carro
{
    public:
        friend class fcarro;                //A classe fcarro é amiga da classe carro
        carro(char *, char *, int, char*);  //Protótipo do construtor
        ~carro();                           //Protótipo do destrutor
        void exibe_carro();                 //Protótipo do método exibe_carro()
        void exibe_fcarro(const fcarro &);  //Protótipo do método exibe_fcarro()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
class fcarro                                //Declaração da classe fcarro
{
    public:
        friend class carro;                 //A classe carro é amiga da classe fcarro
        fcarro(float, char);                //Protótipo do construtor
        ~fcarro();                          //Protótipo do destrutor
        void altera_carro(carro &);         //Protótipo do método altera_carro()
    private:
        float valor;
        char combust;
};
int main()
{
    //Cria o objeto carro1 da classe carro, chamando o construtor
    carro carro1("GM", "Corsa", 1999, "DEL-0001");
    //Cria o objeto fcarro1 da classe fcarro, chamando o construtor
    fcarro fcarro1(15000.00, 'G');
    cout << "Antes da alteração - Classe carro" << endl;
    carro1.exibe_carro();
    cout << "Depois da alteração - Classe carro" << endl;
    //Passagem do argumento ao método altera_carro(), por referência
    //pois esse altera as variáveis-membro da classe carro
    fcarro1.altera_carro(carro1);
    carro1.exibe_carro();
    cout << "Classe fcarro" << endl;
    //Passagem do argumento ao método exibe_fcarro(), por referência, como o
    //argumento é const, esse método não alterará as variáveis-membro da classe fcarro
    carro1.exibe_fcarro(fcarro1);
    return 0;
}
//Métodos da classe carro
//Definição do método exibe_fcarro()
void carro :: exibe_fcarro(const fcarro & f1)
{
    cout << "Valor: " << f1.valor << endl;
    cout << "Combustível: " << f1.combust << endl;
}
//Definição do método exibe_carro()
void carro :: exibe_carro()
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
//Definição do destrutor
carro :: ~carro()
{
}
//Métodos da classe fcarro
//Definição do método altera_carro()
void fcarro :: altera_carro(carro & c1)
{
    strcpy(c1.marca, "Ford");
    strcpy(c1.modelo, "Focus");
    c1.anofab = 2000;
    strcpy(c1.placa, "ESC-2222");
}
//Definição do construtor
fcarro :: fcarro(float valor1, char combust1)
{
    valor = valor1;
    combust = combust1;
}
//Definição do destrutor
fcarro :: ~fcarro()
{
}