//static02.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                 //Declaração da classe carro
{
    public:
        carro(char *, char *);  //Protótipo do construtor
        ~carro();               //Protótipo do destrutor
    private:
        char marca[12];
        char modelo[7];
        static int cont;        //Variável-membro static
};
//Inicializa a variável-membro static cont. É um contador de objetos criados e destruidos
int carro :: cont = 0;
int main()
{
    //Cria os objetos carro1, carro2 e carro3, chamando o construtor
    carro carro1("GM", "Corsa");
    carro carro2("GM", "Celta");
    carro carro3("GM", "Focus");
    return 0;
}
carro :: carro(char * marc1, char * model1) //Definição do construtor
{
    strcpy(marca, marc1);
    strcpy(modelo, model1);
    cont++;
    cout << "Criação do objeto n° " << cont << endl;
}
carro :: ~carro()   //Definição do destrutor
{
    cout << "Destruição do objeto n° " << cont << " (" << modelo << ")" << endl;
    cont--;
}