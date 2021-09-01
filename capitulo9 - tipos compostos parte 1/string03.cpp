//string03.cpp
#include <iostream>
using namespace std;
int main(){
    char nome[15];
    char esporte[10];
    cout << "Digite seu nome completo: ";
    cin >> nome;
    cout << "Digite seu esporte favorito: " << endl;
    cin >> esporte;
    cout << "Seu esporte favorito é " << esporte << ", " << nome << endl;
    return 0;
}