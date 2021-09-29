//desvir01.cpp
#include <iostream>
using namespace std;
class base1                     //Declaração da classe-base
{
    public:
        ~base1()                //Definição do destrutor não-virtual
        {
            cout << "Destrutor class-base" << endl;
        }
};
class derivada1 : public base1  //Declaração da classe derivada
{
    public:
        ~derivada1()            //Definição do destrutor
        {
            cout << "Destrutor classe-derivada" << endl;
        }
};
int main()                      //Definição da função main()
{
    base1 *ptr = new derivada1;
    delete ptr;
    return 0;
}