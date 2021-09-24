//sobope04.cpp
#include <iostream>
#include <cstring>
using namespace std;
class texto                         //Declaração da classe texto
{
    public:
        texto(char *);                      //Protótipo do construtor
        texto();                            //Protótipo do construtor default
        ~texto();                           //Protótipo do destrutor
        void exibe(int);                    //Protótipo do método exibe()
        texto operator +(const texto &);    //Protótipo da função operator
    private:
        static const int comp = 35;         //Constante simbólica com escopo de classe
        char string1[comp];
};
int main()
{
    //Cria o objeto texto2, chamando o construtor
    texto texto1("Sobrecarga de operadores");
    texto texto2(" de C++");
    //Cria o objeto texto3 sem inicializá-lo, por causa do construtor default
    texto texto3;
    texto1.exibe(1);            //Objeto texto1 chama o método exibe()
    texto2.exibe(2);            //Objeto texto2 chama o método exibe()
    texto3 = texto1 + texto2;   //Chama a função operator
    texto3.exibe(3);            //Objeto texto3 chama o método exibe()
    return 0;
}
void texto :: exibe(int flag)   //Definição do método exibe()
{
    if(flag == 1)
        cout << "String original 1: " << string1 << endl;
    else
        if(flag == 2)
            cout << "String original 2: " << string1 << endl;
        else
            cout << "String resultante:" << string1 << endl;
}
texto texto :: operator +(const texto & texto22)    //Definição da função operator
{
    texto texto_result;
    strcpy(texto_result.string1, string1);
    strcat(texto_result.string1, texto22.string1);
    return texto_result;
}
texto :: texto(char * string11)     //Definição do construtor
{
    strcpy(string1, string11);
}
texto :: texto()    //Definição do construtor default
{
}
texto :: ~texto()   //Definição do destrutor
{
}