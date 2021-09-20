//class03.cpp
#include <iostream>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:                 //Seção public
        void atrib();       //Protótipo do método atrib()
        void exibe();       //Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
        int numcar;
};
int main()
{
    carro carro1, carro2;   //Cria os objetos carro1 e carro2
    carro1.atrib();         //Objeto carro1 chama o método atrib()
    cout << endl;
    carro2.atrib();         //Objeto carro2 chama o método atrib()
    carro1.exibe();         //Objeto carro1 chama o método exibe()
    carro2.exibe();         //Objeto carro2 chama o método exibe()
    return 0;
}
//Definição do método atrib(). Lê dados do teclado e os atribui aos objetos carro1 e carro2
void carro :: atrib()
{
    cout << "Digite os dados do carro n° ";
    cin >> numcar;
    cout << "Marca: ";
    cin >> marca;
    cout << "Modelo: ";
    cin >> modelo;
    cout << "Ano: ";
    cin >> anofab;
    cout << "Placa: ";
    cin >> placa;
}
//Definição do método exibe(). Exibe os valores dos objetos carro1 e carro2
void carro :: exibe()
{
    cout << endl;
    cout << "Dados do carro n° " << numcar << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl;
}