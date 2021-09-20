//arrobj03.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe carro
{
    public:
        carro(char *, char *, int, char *); //Protótipo do construtor
        ~carro();                           //Protótipo do destrutor
        void exibe();                       //Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
const int kqtd = 2;             //Constante simbólica
int main()
{
    //Cria o arra de objetos carros com kqtd elementos e chama o construtor
    carro carros[kqtd] =
    {
        carro("Ford", "Ka", 2000, "ALT-2121"),
        carro("GM", "Astra", 2001, "END-6789")
    };
    for (int k = 0; k < kqtd; k++)
    {
        carros[k].exibe();
        cout << endl;
    }
    return 0;
}
//Definição do método exibe(). Exibe os valores do array de objetos carros
void carro :: exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl; 
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