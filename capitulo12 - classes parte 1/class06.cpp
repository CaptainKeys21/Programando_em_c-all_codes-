//class06.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe carro
{
    public:
        carro(char *, char *, int, char*);  //Protótipo do construto
        ~carro();               //Protótipo do destrutor
        void exibe();           //Protótipo do método exibe()
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
    carro carro2("GM", "Celta", 2000, "MEM-2222");
    carro1.exibe();             //Objeto carro1 chama o método exibe()
    carro2.exibe();             //Objeto carro2 chama o método exibe()
    return 0;
}
//Definição do método exibe(). Exibe os valores dos objetos carro1 e carro2
void carro :: exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl << endl;
}
//Definição do Construtor
carro :: carro(char * marca1, char * modelo1, int ano1, char * placa1)
{
    strcpy(marca, marca1);
    strcpy(modelo, modelo1);
    anofab = ano1;
    strcpy(placa, placa1);
}
carro :: ~carro()           //Definição do destrutor
{
    //Os objetos são destruídos na ordem inversa em que foram criados. A linha
    //seguinte ilustra a execução do destrutor. Um destrutor não precisa ter instruções
    cout << "Destruindo o objeto ... " << modelo << endl;
}