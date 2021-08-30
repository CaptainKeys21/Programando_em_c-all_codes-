//classm04.cpp
#include <iostream>
using namespace std;
static int cont = 10;   //Variável estática externa
void exibe();           //Protótipo da função exibe()
void altera(int);       //Protótipo da função altera()
int main()
{
    cout << "cont (variável estática externa) = " << cont << endl;
    exibe();            //Chama a função exibe()
    altera(80);         //Chama a função altera()
    cout << "cont (variável estática externa) = " << cont << endl;
    return 0;
}
void exibe()            //Definição da função exibe()
{
    int cont = 20;
    cout << "cont (variável local) = " << cont << endl;
    cout << "cont (variável estática externa) = " << ::cont << endl;
}
void altera(int cont1)  //Definição da função altera()
{
    //Altera o valor da variável estática externa cont
    cont = cont + cont1;
}