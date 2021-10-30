//esfor02.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int numero;
    float valor;
    char letra;
    char texto[9];
    //Cria o objeto ifstream entrada e o associa ao arquivo teste1
    ifstream entrada("../esfor01/teste1");
    entrada >> numero >> valor >> letra >> texto;
    cout << numero << endl;
    cout << valor << endl;
    cout << letra << endl;
    cout << texto << endl;
    entrada.close();    //Fecha o arquivo
    return 0;
}