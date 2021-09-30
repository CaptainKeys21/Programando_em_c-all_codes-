//temcla01.cpp
#include <iostream>
using namespace std;
class xnumeros              //Declaração da classe xnumeros
{
    public:
        xnumeros();         //Protótipo do construtor
        ~xnumeros();        //Protótipo do destrutor
        void atrib();       //Protótipo do método atrib()
        void exibe();       //Protótipo do método exibe()
        int soma();         //Protótipo do método soma()
    private:
        int matriz[9];
};
int main()
{
    xnumeros numeros1;      //Cria o objeto numeros1
    numeros1.atrib();       //Chama o método atrib()
    numeros1.exibe();       //Chama o método exibe()
    cout << "Somatório: " << numeros1.soma() << endl;   //Chama o método soma()
    return 0;
}
//Definição do método atrib(). Atribui os valores de 0 a 8 ao array
void xnumeros :: atrib()
{
    int i;
    for(i = 0; i < 9; i++)
        matriz[i] = i;
}
//Definição do método exibe(). Exibe os valores do array
void xnumeros :: exibe()
{
    int i;
    cout << "Valores: ";
    for(i = 0; i < 9; i++)
        cout << matriz[i] << " ";
    cout << endl;
}
//Definição do método soma(). Soma os valores do array
int xnumeros :: soma()
{
    int somat = 0;
    for(int i = 0; i < 9; i++)
        somat = somat + matriz[i];
    return somat;
}
xnumeros :: xnumeros()      //Definição do construtor
{
}
xnumeros :: ~xnumeros()     //Definição do destrutor
{
}