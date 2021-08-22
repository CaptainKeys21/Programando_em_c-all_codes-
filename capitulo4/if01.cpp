//if01.cpp
#include <iostream>
using namespace std;
int main()
{
    int depend;
    float salfam;
    //A variável depend é comparada com um conjunto de valores e o
    //"salário família" é atribuido conforme a quantidade de dependentes
    cout << "Digite o número de dependentes: ";
    cin >> depend;
    if (depend == 0)
        salfam = 0.0;
    else
        if (depend == 1)
            salfam = 10.0;
        else
            if (depend == 2)
                salfam = 20.0;
            else
                if(depend == 3)
                    salfam = 30.0;
                else
                    salfam = 40.0;
    cout << "Salário família = " << salfam << endl;
    return 0;
}