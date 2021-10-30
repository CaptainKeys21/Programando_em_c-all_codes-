//arqout01.cpp
#include <fstream>
using namespace std;
int main()
{
    ofstream arqtexto("teste2");
    arqtexto << "Linha 1" << endl;
    arqtexto << "Linha 2" << endl;
    arqtexto << "Linha 3" << endl;
    arqtexto.close();
    return 0;
}