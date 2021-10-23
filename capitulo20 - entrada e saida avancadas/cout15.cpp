//cout15.cpp
#include <iostream>
using namespace std;
int main()
{
    char nome[14] = "Linguagem C++";
    cout.write("Classe", 5) << endl;
    cout.write(nome, 1).write(nome,3) << endl;
    cout.write(nome, 13) << endl;
    return 0;
}