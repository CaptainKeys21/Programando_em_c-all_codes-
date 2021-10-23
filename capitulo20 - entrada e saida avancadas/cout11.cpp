//cout11.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //setw define 10 caracteres de comprimento, como os valores ocupam
    //6 posições, ocorre o preenchimento com 4 asteriscos
    float compra = 200.55;
    float limite = 400.55;
    cout << setfill('*');
    cout << "Compra: " << setw(10) << compra << endl;
    cout << "Limite: " << setw(10) << limite << endl;
    return 0;
}