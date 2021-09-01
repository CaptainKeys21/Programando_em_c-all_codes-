//string02.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //a função strlen() retorna a quantidade de caracteres de um string, sem
    //contar o caractere nulo. Está prototipada no arquivo-cabeçalho cstring
    char nome[7];
    int qtd_car;
    cout << "Digite seu nome: ";
    cin >> nome;
    qtd_car = strlen(nome);
    cout << "Seu nome tem " << qtd_car << " caracteres" << endl;
    return 0;
}