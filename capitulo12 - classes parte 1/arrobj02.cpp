//arrobj02.cpp
#include <iostream>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:
        void atrib();       //Protótipo do método atrib()
        void exibe();       //Protótipo do método exibe()
    private:
        char marca[12];
        char modelo[7];
        int anofab;
        char placa[9];
        int numcar;
};
const int kqtd = 2;         //Constante simbólica
int main()
{
    //cria o array de objetos carros com kqtd elementos
    carro carros[kqtd];
    int k;
    for (k = 0; k < kqtd; k++)
        carros[k].atrib();
    for (k = 0; k < kqtd; k++)
        {
            cout << endl;
            carros[k].exibe();
        }
    return 0;
}
//Definição do método atrib(). Lê dados a partir do teclado
void carro :: atrib()
{
    cout << "Digite os dados do carro n° ";
    cin >> numcar;
    cout << " Marca: ";
    cin >> marca;
    cout << " Modelo: ";
    cin >> modelo;
    cout << " Ano: ";
    cin >> anofab;
    cout << " Placa :";
    cin >> placa;
}
//Definição do método exibe(). Exibe os valores do array de objetos carros
void carro :: exibe()
{
    cout << "Dados do carro n° " << numcar << endl;
    cout << " Marca: " << marca << endl;
    cout << " Modelo: " << modelo << endl;
    cout << " Ano: " << anofab << endl;
    cout << " Placa: " << placa << endl;
}