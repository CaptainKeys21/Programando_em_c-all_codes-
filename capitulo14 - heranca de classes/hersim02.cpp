//hersim02.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe-base carro
{
    public:
        carro(char *, char *);  //Protótipo do construtor
        void exibe();           //Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
};
class novo_carro : public carro //Declaração da classe derivada
{
    public:
        novo_carro(char *, char *, int, char *, float); //Protótipo do construtor
        void exibe_novo();      //Protótipo do método exibe_novo()
    private:
        int anofab;
        char placa[9];
        float valor;
};
int main()
{
    //Cria o objeto carro1, chamando o construtor
    carro carro1("GM", "Corsa");
    //Cria o objeto ncarro1, chamando os construtores
    novo_carro ncarro1("For", "Focus", 2002, "NUL-3333", 35000.00);
    carro1.exibe();             //Objeto da classe-base chama método da classe-base
    cout << endl;
    //Objeto da classe derivada chama método da classe derivada
    ncarro1.exibe_novo();
    cout << endl;
    ncarro1.exibe();            //Objeto da classe derivada chama método da classe-base
    return 0;
}
//Métodos da classe-base carro
void carro :: exibe()           //Definição do método exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
}
carro :: carro(char * marca1, char * modelo1)   //Definição do construtor
{
    strcpy(marca, marca1);
    strcpy(modelo, modelo1);
}
//Métodos da classe derivada novo_carro
void novo_carro :: exibe_novo() //Definição do método exibe_novo()
{
    exibe();                    //Chama o método exibe() da classe-base
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl;
    cout << "Valor: " << valor << endl;
}
//Definição do construtor. Chama o construtor da classe-base
novo_carro :: novo_carro(char * marca1, char * modelo1, int ano1, char * placa1, float valor1) : carro(marca1, modelo1)
{
    anofab = ano1;
    strcpy(placa, placa1);
    valor = valor1;
}