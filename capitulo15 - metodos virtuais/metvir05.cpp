//metvir05.cpp
#include <iostream>
using namespace std;
class FormasGeo                     //Declaração da classe-base formas geométricas
{
    public:
        virtual ~FormasGeo();       //Protótipo do destrutor virtual
        virtual void desenhar();    //Protótipo do método virtual desenhar()
};
//Definição da função main()
int main()
{
    FormasGeo forma1;               //Cria o objeto forma1 da classe-base
    forma1.desenhar();              //Objeto forma1 chama o método desenhar()
    return 0;
}
//Métodos da classe-base FormasGeo
void FormasGeo :: desenhar()        //Definição do método desenhar()
{
    cout << "Método desenhar()" << endl;
}
FormasGeo :: ~FormasGeo()           //Definição do destrutor virtual
{
}