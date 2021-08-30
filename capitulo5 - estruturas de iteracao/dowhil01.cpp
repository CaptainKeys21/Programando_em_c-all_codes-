//dowhil01.cpp
#include <iostream>
using namespace std;
int main()
{
    char codigo = '#';
    char senha;
    do
    {
        cout << "Digite a senha: ";
        cin >> senha;
    } while (senha != codigo);
    return 0;
}