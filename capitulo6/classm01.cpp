//classm01.cpp
#include <iostream>
using namespace std;
void teste();     //Protótipo da função teste() 
int main()
{
    int horas = 60;
    cout << "Horas (função main) = " << horas << endl;
    teste();
    return 0;
}
void teste()
{
    int horas = 120;
    cout << "Horas (função teste) = " << horas << endl;
}