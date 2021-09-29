//metvir02.cpp
#include <iostream>
using namespace std;
class FormasGeo                     //Declaração da classe-base formas geométricas
{
    public:
        void desenhar();            //protótipo do método desenhar
};
class quadrado : public FormasGeo   //Declaração da classe derivada quadrado
{
    public:
        void desenhar();            //protótipo do método desenhar
};
class retang : public FormasGeo     //Declaração da classe derivada retang
{
    public:
        void desenhar();            //protótipo do método desenhar
};
//Definição da função main()
int main()
{
    quadrado quadrado1;             //Cria o objeto quadrado1
    retang retang1;                 //Cria o objeto retang1
    FormasGeo *ptr;                 //Ponteiro para a classe-base
    ptr = &quadrado1;               //Atribui o endereço do objeto quadrado1 à ptr
    ptr -> desenhar();              //Chama o método desenhar()
    ptr = &retang1;                 //Atribui o endereço do objeto retang1 à ptr
    ptr -> desenhar();              //Chama o método desenhar()
    return 0;
}
//Métodos da classe-base FormasGeo
void FormasGeo :: desenhar()        //Definição do método desenhar()
{
    cout << "Classe-base FormasGeo" << endl;
}
//Métodos da classe-derivada quadrado
void quadrado :: desenhar()         //Definição do método desenhar()
{
    cout << "Classe derivada quadrado" << endl;
}
//Métodos da classe-derivada retang
void retang :: desenhar()           //Definição do método desenhar()
{
    cout << "Classe derivada retang" << endl;
}