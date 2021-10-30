//print01.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int klimite = 20;
    char linha[klimite];
    ifstream entrada("../arqout01/teste2"); //Abre o arquivo a ser impresso
    if (entrada.is_open() == false)
    {
        cout << "Erro na abertura do arquivo" << endl;
        return 1;
    }
    else
    {
        ofstream printer("PRN");            //Abre o arquivo-impressora
        entrada.getline(linha, klimite);
        while (entrada.eof() == false)
        {
            printer << linha << endl;
            entrada.getline(linha, klimite);
        }
        printer << "\f";                    //Ejeta a página
        printer.close();
        entrada.close();
        return 0;
    }
}