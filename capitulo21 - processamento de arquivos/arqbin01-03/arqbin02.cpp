//arqbin02.cpp
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    struct pessoa           //Gabarito de estrutura pessoas
    {
        int idade;
        char nome[20];
        float salario1;
    };
    pessoa pessoa1;         //Variável-estrutura pessoa1
    char resp = 'S';
    short int i;
    short int qtde = 0;
    ofstream saida1("bin2", ios_base::out | ios_base::binary);
    //Leitura de dados do tecaldo e gravação da estrutura
    while(resp == 'S')
    {
        cout << " Idade: ";
        cin >> pessoa1.idade;
        cin.get();
        cout << " Nome: ";
        cin.get(pessoa1.nome, 20);
        cout << " Salário: ";
        cin >> pessoa1.salario1;
        saida1.write((char *) &pessoa1, sizeof(pessoa1));
        qtde++;
        cout << "Continuar? (S/N): ";
        cin >> resp;
        resp = toupper(resp);
    }
    saida1.close();
    //Leitura do arquivo e exibição da estrutura
    ifstream entrada("bin2", ios_base::in | ios_base::binary);
    cout << endl;
    cout << "Dados do arquivo";
    for(i = 0; i < qtde; i++)
    {
        entrada.read((char *) &pessoa1, sizeof(pessoa1));
        cout << endl;
        cout << " Idade: " << pessoa1.idade << endl;
        cout << " Nome: " << pessoa1.nome << endl;
        cout << " Salário: " << pessoa1.salario1 << endl;
    }
    entrada.close();
    return 0;
}