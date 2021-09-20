//this02.cpp
#include <iostream>
#include <cstring>
using namespace std;
class classex
{
    public:
        classex(char * = "", int = 0);  //Protótipo do construtor com valores
        ~classex();                     //Protótipo do destrutor
        classex & compara(classex &);   //Protótipo do método compara()
        void exibe();                   //Protótipo do método exibe()
    private:
        char nome[10];
        int valor;
};
int main()
{
    //Declara os objetos objetox1 e objetox2, chamando o construtor
    classex objetox1("Objeto x1", 100);
    classex objetox2("Objeto x2", 200);
    //Cria o objeto maior sem inicializá-lo, por causa do construtor default
    classex maior;
    objetox1.exibe();
    objetox2.exibe();
    //Passagem de objeto ao método compara(), por referência
    maior = objetox1.compara(objetox2);
    //maior = objetox2.compara(objetox1);
    maior.exibe();
    return 0;
}
//A linha "maior = objetox2.compara(objetox1);" também pode ser utilizada,
//mostrando as duas possibilidades de chamada ao método compara(), produzindo o mesmo resultado.
void classex :: exibe()                 //Definição do método exibe()
{
    cout << "Objeto: " << nome << endl;
    cout << "Valor: " << valor << endl << endl;
}
//Definição do método compara()
classex & classex :: compara(classex & valorx)
{
    cout << "Objeto com o maior valor: " << endl << endl;
    if(valorx.valor > valor)
        return valorx;
    else
        return *this;
}
classex :: classex(char * nome1, int valor1)//Definição do construtor
{
    strcpy(nome, nome1);
    valor = valor1;
}
classex :: ~classex()               //Definição do destrutor
{
}