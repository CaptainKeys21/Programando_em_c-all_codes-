//exc01.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int dividendo, divisor, quociente;
    cout << "Digite o dividendo: ";
    cin >> dividendo;
    cout << "Digite o divisor: ";
    cin >> divisor;
    if(divisor == 0)
    {
        cout << "Divisor inválido.";
        abort();        //Ou exit(1);
    }
    else
    {
        quociente = dividendo / divisor;
        return 0;
    }
}