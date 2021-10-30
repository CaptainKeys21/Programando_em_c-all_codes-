//arqinp01.cpp
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    const int klimite = 16;
    char lin1[klimite], lin2[klimite], lin3[klimite];
    ifstream arqtexto("../arqout01/teste2");
    arqtexto.getline(lin1, klimite);
    arqtexto.getline(lin2, klimite);
    arqtexto.getline(lin3, klimite);
    arqtexto.close();
    cout << lin1 << endl;
    cout << lin2 << endl;
    cout << lin3 << endl;
    return 0;
}