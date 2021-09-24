//sobope03.cpp
#include <iostream>
#include <cstring>
using namespace std;
class texto                         //Declaração da classe texto
{
    public:
        texto(char *);              //Protótipo do construtor
        ~texto();                   //Protótipo do destrutor
        void exibe(int);            //Protótipo do método exibe()
        char * operator -(int);     //Protótipo da função operator
    private:
        static const int comp = 25; //Constante simbólica com escopo de classe
        char string1[comp];
};
int main()
{
    //Cria o objeto texto1, chamando o construtor
    texto texto1("Sobrecarga de operadores");
    texto1.exibe(1);                //Objeto texto1 chama o método exibe()
    texto1 = texto1 - 5;            //Chama a função operator
    texto1.exibe(2);                //Objeto texto1 chama o método exibe()
    return 0;
}
void texto :: exibe(int flag)       //Definição do método exibe()
{
    if(flag == 1)
        cout << "String original: " << string1 << endl;
    else
        cout << "Substring: " << string1 << endl;
}
char * texto :: operator -(int qtd) //Definição da função operator
{
    int k = 0;
    char str_aux[comp];
    while(k < qtd)
    {
        str_aux[k] = string1[k];
        k++;
    }
    str_aux[k] = '\0';
    strcpy(string1, str_aux);
    return string1;
}
texto :: texto(char * string11)     //Definição do construtor
{
    strcpy(string1, string11);
}
texto :: ~texto()                   //Definição do destrutor
{
}