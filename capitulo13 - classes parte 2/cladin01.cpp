//cladin01.cpp
#include <iostream>
using namespace std;
class xstring               //Declaração da classe xstring
{
    public:
        ~xstring();         //Protótipo do destrutor
        void le_nome();     //Protótipo do método le_nome()
        void exibe();       //Protótipo do método exibe()
    private:
        char * texto;
        //Constante simbólica com escopo de classe
        static const int comp = 21;
};
int main()
{
    xstring nome;           //Cria o objeto nome
    nome.le_nome();         //Objeto nome chama o método le_nome
    cout << endl;
    nome.exibe();           //Objeto nome chama o método exibe()
    return 0;
}
//Definição do método le_nome(). Lê dados do teclado
void xstring :: le_nome()
{
    texto = new char[comp];
    cout << "Digite o seu nome (até 20 caracteres): ";
    cin.get(texto, comp);
}
//Definição do método exibe(). Exibe o valor do objeto nome
void xstring :: exibe()
{
    cout << "Olá, " << texto << endl;
}
xstring :: ~xstring()   //Definição do destrutor
{
    cout << "Objeto " << texto << " destruido" << endl;
    delete [ ] texto;
}