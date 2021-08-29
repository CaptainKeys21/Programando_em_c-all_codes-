//func03.cpp
#include <iostream>
using namespace std;
void extenso(int);      //Protótipo da função extenso()
int main()
{
    int numero;
    cout << "Digite um número entre 1 e 4: ";
    cin >> numero;
    cout << endl;
    //Chama a função extenso() com o argumento real numero
    extenso(numero);
    return 0;
}
void extenso(int numero1) // Definição da função extenso()
{
    //numero 1 é o argumento formal. Terá o mesmo valor que o argumento real numero
    switch(numero1)
    {
        case 1:
            cout << "Um";
            break;
        case 2:
            cout << "Dois";
            break;
        case 3:
            cout << "Três";
            break;
        case 4:
            cout << "Quatro";
            break;
        default:
            cout << "Número fora do intervalo";
            break;
    }
}