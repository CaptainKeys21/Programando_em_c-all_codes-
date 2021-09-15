//string10.cpp
#include <iostream>
using namespace std;
int main()
{
    const int klimite = 20;
    char *ptr = new char[klimite];
    //verifica se a alocação de memória foi feita com sucesso
    if(ptr == 0)
    {
        cout << "Falta de memória" << endl;
        return 1;
    }
    else
    {
        cout << "Digite seu nome e sobrenome: ";
        cin.get(ptr, klimite);
        cout << "Você se chama " << ptr << endl;
        delete [ ] ptr;
        return 0;
    }
}