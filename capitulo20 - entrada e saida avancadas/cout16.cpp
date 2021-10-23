//cout16.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    const int comp = 10;
    char nome[comp] = "Micro";
    int ncomp;
    ncomp = strlen(nome);
    int k;
    for (k = 1; k <= ncomp; k++)
        cout.write(nome, k) << endl;
    return 0;
}