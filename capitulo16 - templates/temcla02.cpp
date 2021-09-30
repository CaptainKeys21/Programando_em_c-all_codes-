//temcla02.cpp
#include <iostream>
using namespace std;
//Declaração da classe-template. Ou template <class tipo1>
template <typename Tipo1>
class xnumeros
{
    public:
        xnumeros();         //Protótipo do construtor
        ~xnumeros();        //Protótipo do destrutor
        void atrib();       //Protótipo do método atrib()
        void exibe();       //Protótipo do método exibe()
        Tipo1 soma();       //Protótipo do método soma()
    private:
        int matriz[9];
};
int main()
{
    xnumeros <int> NumInt;  //Cria o objeto NumInt
    xnumeros <int> NumFloat;//Cria o objeto NumFloat
    //Objeto NumInt chama os métodos atrib(), exibe() e soma()
    NumInt.atrib();
    NumInt.exibe();
    cout << "Somatório (int): " << NumInt.soma() << endl << endl;
    //Objeto NumFloat chama os métodos atrib(), exibe() e soma()
    NumFloat.atrib();
    NumFloat.exibe();
    cout << "Somatório (float): " << NumFloat.soma() << endl << endl;
    return 0;
}
//Definição do método atrib(). Atribui valores ao array
template <typename Tipo1>
void xnumeros<Tipo1> :: atrib()
{
    int i;
    for(i = 0; i < 9; i++)
        matriz[i] = i + 0.5;
}
//Definição do método exibe(). Exibe os valores do array
template <typename Tipo1>
void xnumeros<Tipo1> :: exibe()
{
    int i;
    cout << "Valores: ";
    for(i = 0; i < 9; i++)
        cout << matriz[i] << " ";
    cout << endl;
}
//Definição do método soma(). Soma dos valores do array
template <typename Tipo1>
Tipo1 xnumeros<Tipo1> :: soma()
{
    Tipo1 somat = 0;
    int i;
    for(i = 0; i < 9; i++)
        somat = somat + matriz[i];
    return somat;
}
template <typename Tipo1>   //Definição do construtor
xnumeros<Tipo1> :: xnumeros()
{
}
template <typename Tipo1>    //Definição do destrutor
xnumeros<Tipo1> :: ~xnumeros()
{
}