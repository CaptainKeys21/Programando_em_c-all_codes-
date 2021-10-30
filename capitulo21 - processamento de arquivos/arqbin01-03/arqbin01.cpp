//arqbin01.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int kcomp = 10;
    int vetor[kcomp], i;
    //Atribui os valores de 0 a 9 ao array vetor
    for(i = 0; i < kcomp; i++)
        vetor[i] = i;
    //Cria o objeto ofstream saida1 e o associa ao arquivo bin1
    ofstream saida1("bin1", ios_base::out | ios_base::binary);
    //Grava o array vetor no arquivo bin1
    saida1.write((char *) &vetor, sizeof(int) * kcomp);
    saida1.close();                 //Fecha o arquivo
    //Zera o arra vetor
    for(i = 0; i < kcomp; i++)
        vetor[i] = 0;
    //Cria o objeto ifstream entrada e o associa ao arquivo bin1
    ifstream entrada("bin1", ios_base::in | ios_base::binary);
    //Lê o array gravado no arquivo bin1 e o armazena no array vetor
    entrada.read((char *) &vetor, sizeof(int) * kcomp);
    //Exibe o array vetor
    for(i = 0; i < kcomp; i++)
        cout << vetor[i] << " ";
    cout << endl;
    entrada.close();                //Fecha o arquivo
    return 0;
}