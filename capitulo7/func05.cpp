//func05.cpp
#include <iostream>
using namespace std;
//Protótipo da função conv_horas(). Retorna um valor int
// e recebe um argumento do tipo int
int conv_horas(int);
int main()
{
    int horas, minutos;
    cout << "CONVERSÃO DE HORAS EM MINUTOS" << endl << endl;
    cout << "Digite as horas: ";
    cin >> horas;
    //Chama a função conv_horas() com o argumento real horas. O Valor
    //retornado é armazenado na variável minutos
    minutos = conv_horas(horas);
    cout << minutos << " minutos" << endl;
    return 0;
}
int conv_horas(int horas1)  //Definção da função conv_horas()
{
    //horas1 é o argumento formal. Terá o mesmo valor que o argumento
    //real horas
    return horas1 * 60;
}