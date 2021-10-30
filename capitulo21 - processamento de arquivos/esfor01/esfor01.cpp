//esfor01.cpp
#include <fstream>
using namespace std;
int main()
{
    int numero = 12;
    float valor = -13.5;
    char letra = 'Z';
    char texto[9] = "Ano 2003";
    ofstream saida1;            //Cria o objeto ofstream saida1
    saida1.open("teste1");      //Associa o objeto saida1 ao arquivo teste1
    //Grava no arquivo teste1
    saida1 << numero << endl;
    saida1 << valor << endl;
    saida1 << letra << endl;
    saida1 << texto << endl;
    saida1.close();              //Fecha o arquivo
    return 0;
}