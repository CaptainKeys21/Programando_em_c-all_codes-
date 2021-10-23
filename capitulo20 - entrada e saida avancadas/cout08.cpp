//cout08.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //setw definne 10 caracteres de comprimento, como valores ocupam 6 posições,
    //ocorre o preenchimento com 4 asteriscos
    float compra = 200.55;
    float limite = 400.55;
    cout.fill('*');
    cout << "Compra: " << setw(10) << compra << endl;
    cout << "limite: " << setw(10) << limite << endl;
    return 0;
}