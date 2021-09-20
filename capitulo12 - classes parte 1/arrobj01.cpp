//arrobj01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro             //Declaração da classe carro
{
    public:
        void atrib();   //Protótipo do método atrib()
        void exibe(int);//Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
};
int main()
{
    //Cria o array de objetos carros com 2 elementos
    carro carros[2];
    carros[0].atrib();  //Chama o método atrib()
    carros[1].atrib();  //Chama o método atrib()
    return 0;
}
//Definição do método atrib(). Atribui valores ao array de objetos carros
void carro :: atrib()
{
    static int numcar = 0;
    strcpy(marca, "Volkswagen");
    strcpy(modelo, "Gol");
    anofab = 2001;
    strcpy(placa, "CPP-1234");
    numcar++;
    exibe(numcar);
}
//Definição do método exibe(). Exibe os valores do array de objetos carros
void carro :: exibe(int numcar1)
{
    cout << "Objeto: " << numcar1 << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl << endl;
}