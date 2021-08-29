//func02.cpp
#include <iostream>
using namespace std;
//Protótipo da função exibe(). Não retorna valor nem recebe argumentos
void exibe();
int main()
{
    exibe();        //Chama a função exibe()
    return 0;
}
void exibe()        //Definição da função exibe()
{
    for (int col = 1; col < 51; col++)
    {
        cout << "*";
    }
}