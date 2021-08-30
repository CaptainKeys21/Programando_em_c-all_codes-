//func17.cpp
#include <iostream>
using namespace std;
//Protótipo da função mult() com 2 argumentos do tipo int
int mult(int, int);
//Protótipo da função mult() com 2 argumentos do tipo float
float mult(float, float);
int main()
{
    int resint;
    int numero1 = 10, numero2 = 20;
    float resfloat;
    float valor1 = 15.0, valor2 = 2.5;
    resint = mult(numero1, numero2);    //Chama a função mult()
    cout << "Inteiro: " << resint << endl;
    resfloat = mult(valor1, valor2);    //Chama a função mult()
    cout << "Ponto-flutuante: " << resfloat << endl;
    return 0;
}
//Definição da função mult() com argumentos do tipo int
int mult(int n1, int n2)
{
    return n1 * n2;
}
//Definição da função mult() com argumentos do tipo float
float mult(float n1, float n2)
{
    return n1 * n2;
}