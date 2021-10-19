//exc04.cpp
#include <iostream>
#include <cmath>
using namespace std;
//Protótipos das funções CalcRaiz() e Divisao()
double CalcRaiz(double) throw (const char *);
float Divisao(float, float) throw (const char *);
int main()
{
    double numero, raizq;
    float divid, divis, quoc;
    cout << "Número para o cálculo da raiz quadrada: ";
    cin >> numero;
    try
    {
        raizq = CalcRaiz(numero);
        cout << "Raiz quadrada: " << raizq << endl;
        cout << endl << "Digite o dividendo: ";
        cin >> divid;
        cout << "Digite o divisor: ";
        cin >> divis;
        quoc = Divisao(divid, divis);
        cout << "Quociente: " << quoc << endl;
        cout << "Término sem erro" << endl;
        return 0;
    }
    catch (const char * msg)
    {
        cout << msg << endl;
    }
    cout << "Término com erro" << endl;
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