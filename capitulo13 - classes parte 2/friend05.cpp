//friend05.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro;                                    //Declaração antecipada
class fcarro                                    //Declaração da classe fcarro (amiga da classe carro)
{
    public:
        void altera(carro &);                   //Protótipo do método altera()
        void exibeval(carro);                   //Protótipo do método exibeval()
};
class carro
{
    public:
        //Protótipo do construtor
        carro(float, char *, char *, int, char *);
        ~carro();                               //Protótipo do destrutor
        void exibe();                            //Protótipo do método exibe()
        float valor;
        friend void fcarro :: altera(carro &);  //Protótipo do método friend altera()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
int main()
{
    //Cria o objeto carro1 da classe carro, chamando o construtor
    carro carro1(15000.00, "GM", "Corsa", 1999, "DEL-0001");
    //Cria o objeto fcarro1 da classe fcarro
    fcarro fcarro1;
    cout << "Antes da alteração" << endl;
    carro1.exibe();
    //Passagem do argumento ao método altera(), por referência,
    //pois esse altera as variáveis-membro da classe carro
    fcarro1.altera(carro1);
    cout << "Depois da alteração" << endl;
    carro1.exibe();
    fcarro1.exibeval(carro1);
    return 0;
}
//Métodos da classe carro
void carro :: exibe()                   //Definição do método exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl;
    cout << "Valor: " << valor << endl << endl;
}
//Definição do construtor
carro :: carro(float valor1, char * marc1, char * model1, int ano1, char * plac1)
{
    valor = valor1;
    strcpy(marca, marc1);
    strcpy(modelo, model1);
    anofab = ano1;
    strcpy(placa,plac1);
}
//Definição do destrutor
carro :: ~carro()
{
}
//Métodos da classe amiga fcarro
void fcarro :: altera(carro & c1)       //Definição do método altera()
{
    strcpy(c1.marca, "Ford");
    strcpy(c1.modelo, "Focus");
    c1.anofab = 2000;
    strcpy(c1.placa, "GNU-2222");
    c1.valor = 19000.00;
}
void fcarro :: exibeval(carro c2)       //Definição do método friend exibeval()
{
    cout << "Valor: " << c2.valor;
}