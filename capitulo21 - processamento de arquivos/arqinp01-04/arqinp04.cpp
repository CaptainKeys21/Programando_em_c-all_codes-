//arqinp04.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    ifstream arqtexto("../arqout01/teste2");
    arqtexto >> ch;
    while (arqtexto.eof() == false);
    {
        cout << ch << endl;
        arqtexto >> ch;
    }
    arqtexto.close();
    return 0;
}
//Desatualizado, executa-lo irá causar um loop infinito, pressione Ctrl+C para sair do programa.