//this01.cpp
#include <iostream>
using namespace std;
class classe1
{
    public:
        classe1(int);       //Protótipo do construtor
        void exibe();       //Protótipo do método exibe()
    private:
        int valor;
};
int main()
{
    //Cria o objeto objeto1, chamando o construtor
    classe1 objeto1(50);
    objeto1.exibe();
    return 0;
}
void classe1 :: exibe()     //Definição do método exibe()
{
    cout << "Valor (sem o ponteiro this): " << valor << endl;
    cout << "Valor (com o ponteiro this): " << this -> valor << endl;
    cout << "Valor (com o ponteiro this de-referenciado): " << (*this).valor << endl; 
}
classe1 :: classe1(int valor1)  //Definição do construtor
{
    valor = valor1;
}