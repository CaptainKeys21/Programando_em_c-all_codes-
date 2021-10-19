//exc05.cpp
#include <iostream>
#include <cmath>
using namespace std;
//Protótipos da funções CalRaiz e Divisao()
double CalcRaiz(double) throw (const char *);
float Divisao(float, float) throw (const char *);
int main()
{
    double numero, raizq;
    float divid, divis, quoc;
    try
    {
        cout << "Numero para cálculo da raiz quadrada: ";
        cin >> numero;
        raizq = CalcRaiz(numero);
        cout << "Raiz quadrada: " << raizq << endl << endl;
    }
    catch(const char * msg1)
    {
        cout << msg1 << endl;
        return 1;
    }
    try
    {
        cout << "Digite o dividendo: ";
        cin >> divid;
        cout << "Digite o divisor: ";
        cin >> divis;
        quoc = Divisao(divid, divis);
        cout << "Quociente: " << quoc << endl;
        return 0;
    }
    catch(const char * msg2)
    {
        cout << msg2 << endl;
    }
    return 1;
}
double CalcRaiz(double numero1) throw (const char *)
{
    if (numero1 < 0)
        throw "Raiz quadrada de número negativo";
    return sqrt(numero1);
}
float Divisao(float divid1, float divis1) throw (const char *)
{
    if (divis1 == 0)
        throw "Tentativa de divisão por zero";
    return divid1 / divis1;
}
