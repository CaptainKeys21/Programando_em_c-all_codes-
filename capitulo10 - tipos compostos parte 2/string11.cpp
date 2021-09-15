//string11.cpp
#include <iostream>
#include <cstring>      //Para a função strcmp()
using namespace std;
int main()
{
    char nome[7] = "Pascal";
    char palav[7];
    int result;
    cout << "Digite o nome de uma linguagem de programação: ";
    cin >> palav;
    result = strcmp(palav, nome);
    if(result == 0)
        cout << "Você acertou" << endl;
    else
        cout << "Você error" << endl;
    return 0;
}