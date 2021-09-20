//class02.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                 //Declaração da classe carro (externa)
{
    public:                 //Seção public
        char marca[12];     //Variáveis-membro pública
        char modelo[7];
        int anofab;
        char placa[9];
        void exibe();       //Protótipo do método público exibe()
};
int main()
{
    carro carro1, carro2;   //cria os objetos carro1 e carro2
    //Atribui valores ao objeto carro1
    strcpy(carro1.marca, "Volkswagen");
    strcpy(carro1.modelo, "Gol");
    carro1.anofab = 1999;
    strcpy(carro1.placa, "CLS-0123");
    //Atribui valores ao objeto carro2
    strcpy(carro2.marca, "Volkswagen");
    strcpy(carro2.modelo, "Parati");
    carro2.anofab = 2000;
    strcpy(carro2.placa, "FOR-1234");
    cout << "Objeto carro1" << endl;
    carro1.exibe();         //Objeto carro1 chama o método exibe()
    cout << "Objeto carro2" << endl;
    carro2.exibe();         //Objeto carro2 chama o método exibe()
    return 0;
}
//Definição do método exibe(), externo à sua classe. Exibe os valores
//dos objetos carro1 e carro2
void carro :: exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl << endl;
}