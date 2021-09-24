//class11.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe carro
{
    public:
        carro(char *, char *);  //Protótipo do construtor
        ~carro();               //Protótipo do destrutor
        void exibe();           //Protótipo do método exibe()
        char marca[12];
    private:
        char modelo[7];
};
void lista(carro *);            //Protótipo da função não-membro lista()
int main()
{
    //Cria o objeto carro1, chamando o construtor
    carro carro1("GM", "Corsa");
    cout << "Acesso pelo método exibe()" << endl;
    carro1.exibe();
    cout << endl;
    cout << "Acesso pela função não-membro lista()" << endl;
    lista(&carro1);             //Endereço do objeto passado como argumento
    return 0;
}
void carro :: exibe()           //Definição do método exibe()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
}
void lista(carro * c1)          //Definição da função não-membro lista()
{
    c1 -> exibe();
    cout << "Marca: " << c1 -> marca << endl;
}
carro :: carro(char * marc1, char * model1) //Definição do construtor
{
    strcpy(marca, marc1);
    strcpy(modelo, model1);
}
carro :: ~carro()               //Definição do destrutor
{
}