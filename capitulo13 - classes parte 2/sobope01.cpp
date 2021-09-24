//sobope01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class texto                         //Declaracão da classe texto
{
    public:
        texto(char *);              //Protótipo do construtor
        ~texto();                   //Protótipo do destrutor
        void exibe(int);            //Protótipo do método exibe()
        void substr(int);           //Protótipo do método substr()
    private:
        static const int comp = 25; //Constante simbólica com escopo de classe
        char string1[comp];
};
int main()
{
    //Cria o objeto texto1, chamando o construtor
    texto texto1("Sobrecarga de operadores");
    texto1.exibe(1);
    texto1.substr(5);
    texto1.exibe(2);
    return 0;
}
void texto :: exibe(int flag)       //Definição do método exibe()
{
    if(flag == 1)
        cout << "String original: " << string1 << endl;
    else
        cout << "Substring: " << string1 << endl;
}
void texto :: substr(int qtd)       //Definição do método substr()
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
}
texto :: texto(char * string11)     //Definição do construtor
{
    strcpy(string1, string11);
}
texto :: ~texto()                   //Definição do destrutor
{
}