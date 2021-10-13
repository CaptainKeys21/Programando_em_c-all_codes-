//stllis01.cpp
#include <iostream>
#include <list>                         //Para o container list
using namespace std;
int main()
{
    list<float> notas;                  //Lista notas com elementos do tipo float
    list<float>::iterator iterfloat;    //Iterador para uma lista
    notas.push_back(6.5);
    notas.push_back(7.5);
    notas.push_back(8.5);
    notas.push_back(9.5);
    cout << "Minhas notas: ";
    for(iterfloat = notas.begin(); iterfloat != notas.end(); ++iterfloat)
    {
        cout << *iterfloat << " ";
    }
    cout << endl;
    return 0;
}