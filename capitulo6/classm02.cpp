//classm02.cpp
#include <iostream>
using namespace std;
int main()
{
    int contador = 7;       //variável no ínicio
    cout << "contador (início de main) = " << contador << endl;
    {
        for (int contador = 1; contador < 6; contador++) //variável no bloco
            cout << "contador (no bloco) = " << contador << endl;
    }
    cout << endl << "contador (incio de main) = " << contador << endl;
    return 0;
}