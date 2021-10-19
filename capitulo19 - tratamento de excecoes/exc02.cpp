//exc02.cpp
#include <iostream>
using namespace std;
int main()
{
    int dividendo, divisor, quociente;
    cout << "Digite o dividendo: ";
    cin >> dividendo;
    cout << "Digite o divisor: ";
    cin >> divisor;
    try                         //Inicio do bloco try
    {
        if (divisor == 0)
            throw "Tentativa de divisão por zero";
        quociente = dividendo / divisor;
        cout << "Quociente: " << quociente << endl;
        return 0;
    }                           //Fim do bloco try
    catch (const char * msg)    //Inicio do block catch
    {
        cout << msg << endl;
    }                           //Fim do bloco catch
    return 1;
}