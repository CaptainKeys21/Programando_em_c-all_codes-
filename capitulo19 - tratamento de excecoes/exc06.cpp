//exc06.cpp
#include <iostream>
using namespace std;
int main()
{
    int dividendo, divisor, quociente;
    cout << "Digite o dividendo: ";
    cin >> dividendo;
    cout << "Digite o divisor: ";
    cin >> divisor;
    try
    {
        if (divisor == 0)
            throw 1;
        if (divisor == 1)
            throw 2;
        quociente = dividendo / divisor;
        cout << "Quociente: " << quociente << endl;
        return 0;
    }
    catch(...)
    {
        cout << "Ocorreu uma exceção " << endl;
    }
    return 1;
}