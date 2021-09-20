//class04.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:
        char marca[12];
        char modelo[7];
        void exibe1();      //Protótipo do método exibe1()
        void exibe2();      //Protótipo do método exibe2()
};
int main()
{
    carro carro1;           //Cria o objeto carro1
    //Atribui valores ao objeto carro1
    strcpy(carro1.marca, "Volkswagen");
    strcpy(carro1.modelo, "Gol");
    carro1.exibe1();        //Objeto carro1 chama o método exibe1()
    return 0;
}
//Definição do método exibe1(). Exibe os valores do objeto carro1
void carro :: exibe1()
{
    cout << "Objeto carro1 - método exibe1()" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    //Método exibe1() chama o método exibe2(), de forma qualificada
    carro :: exibe2();
    //Método exibe1() chama o método exibe2(), de forma não qualificada
    exibe2();
}
void carro :: exibe2()
{
    cout << "Objeto carro1 - método exibe2()" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
}