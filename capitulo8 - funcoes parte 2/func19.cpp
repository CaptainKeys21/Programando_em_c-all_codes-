//func19.cpp
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int num1, num2, soma;
    if (argc != 3)
    {
        cout << "Você não digitou 2 valores. Programa encerrado. " << endl;
        return 1;
    }
    //A função atoi converte argv[1] e argv[2] em suas representações
    //numéricas para serem operados aritmeticamente
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    soma = num1 + num2;
    cout << argv[1] << " + " << argv[2] << " = " << soma << endl;
    return 0;
}