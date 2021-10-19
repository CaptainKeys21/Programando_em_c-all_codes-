//exc03.cpp
#include <iostream>
using namespace std;
int main()
{
    int dividendo, divisor, quociente;
    cout << "Digite o dividendo: ";
    cin >> dividendo;
    cout << "Digite o divisor: ";
    cin >> divisor;
    try             //Bloco try
    {
        if (divisor == 0)
            throw "Tentativa de divisão por zero;"; //throw 1
        if (divisor < 0)
            throw 8888;                             //throw 2
        quociente = dividendo / divisor;
        cout << "Quociente: " << quociente << endl;
        return 0;
    }
    catch (const char * msg)        //Bloco catch 1
    {
        cout << msg << endl;
    }
    catch (int erro)                //Bloco catch 2
    {
        cout << "Erro: " << erro << endl;
    }
    cout << "Fim." << endl;
    return 1;
}