//arrayr01.cpp
#include <iostream>
using namespace std;
void somar_1(int &);        //protótipo da função somar_1()
int main()
{
    int pares[4] = {10, 20, 30, 40};
    somar_1(pares[2]);      //chama a função somar_1()
    return 0;
}
void somar_1(int & total)   //definição da função somar_1()
{
    total = total + 1;
    cout << total << endl;
}