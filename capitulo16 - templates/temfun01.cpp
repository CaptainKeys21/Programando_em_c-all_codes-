//temfun01.cpp
#include <iostream>
using namespace std;
//TGen é um tipo genético. É o tipo do valor a ser retornado pela função e também
//o tipo de cada um dos argumentos a ser recebido.
//Protótipo da função-template
template <typename TGen>        //Ou template <class TGen>
TGen MenorVal(TGen a, TGen b);
int main()
{
    int x1 = 10, x2 = 20;
    int restint;
    float y1 = 10.5, y2 = 30.5;
    float resfloat;
    char z1 = 'B', z2 = 'Z';
    char reschar;
    restint = MenorVal(x1, x2); //Chama a função-template com argumentos do tipo int
    cout << "Menor valor (int): " << restint << endl;
    resfloat = MenorVal(y1, y2);//Chama a função-template com argumentos do tipo float
    cout << "Menor valor (float): " << resfloat << endl;
    reschar = MenorVal(z1, z2); //Chama a função-template com argumentos do tipo char
    cout << "Menor valor (char): " << reschar << endl;
    return 0;
}
template <typename TGen>        //Definição da função-template
TGen MenorVal(TGen n1, TGen n2)
{
    return (n1 < n2) ? n1 : n2;
}