//stlvec02.cpp
#include <iostream>
#include <algorithm>        //Para o algoritmo sort()
#include <vector>           //Para o container vector
using namespace std;
int main()
{
    unsigned int k;
    vector<int> pares;      //Vetor pares com elementos do tipo int
    pares.push_back(10);
    pares.push_back(2);
    pares.push_back(8);
    pares.push_back(6);
    pares.push_back(12);
    sort(pares.begin(), pares.end());
    for(k = 0; k < pares.size(); k++)
    {
        cout << pares[k] << " ";
    }
    cout << endl;
    return 0;
}