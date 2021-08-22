//switch03.cpp
#include <iostream>
using namespace std;
int main()
{
    int depend;
    float salfam;
    cout << "Digite o número de dependentes: ";
    cin >> depend;
    switch (depend)     //Expressão do tipo int
        {
            case 0:
                salfam = 0.0;
                break;
            case 1:
                salfam = 10.0;
                break;
            case 2:
                salfam = 20.0;
                break;
            case 3:
                salfam = 30.0;
                break;
            default:
                salfam = 40.0;
                break;
        }
    cout << "Salário família = " << salfam << endl;
    return 0;
}