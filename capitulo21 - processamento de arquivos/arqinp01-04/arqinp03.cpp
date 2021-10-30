//arqinp03.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int klimite = 16;
    char linha[klimite];
    ifstream arqtexto("../arqout01/teste2");
    arqtexto >> linha;
    while (arqtexto.eof() == false)
    {
        cout << linha << endl;
        arqtexto >> linha;
    }
    arqtexto.close();
    return 0;
}