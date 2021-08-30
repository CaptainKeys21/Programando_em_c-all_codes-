//classm03.cpp
#include <iostream>
using namespace std;
void loop();        //protótipo da função loop()
int main()
{
    cout << "Primeiro chamada" << endl;
    loop();
    cout << "Segunda chamada" << endl;
    loop();
    return 0;
}
void loop()     //Definição da função loop()
{
    int cont = 1;   //Variável automática
    static int somat = 0;   //Variável estática interna
    for (; cont < 6; cont++)
        somat = somat + cont;
    cout << "Somatório = " << somat << endl;
}