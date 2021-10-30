//Arqbin03.cpp
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
//Declaração da classe pessoa
class pessoa
{
    public:
        ~pessoa();      //Protótipo do destrutor
        void le_dados();//Protótipo do método le_dados()
        void exibe();   //Protótipo do método exibe()
    private:
        char nome[20];
        short int idade;
        float salario1;
};
int main()
{
    char resp = 'S';
    short int i;
    short int qtde = 0;
    //Cria o objeto pessoa1. Utiliza o construtor default
    pessoa pessoa1;
    ofstream saida1("bin3", ios_base::out | ios_base::binary);
    while(resp == 'S')
    {
        pessoa1.le_dados();
        saida1.write((char *) &pessoa1, sizeof(pessoa1));
        qtde++;
        cout << "Continuar? (S/N): ";
        cin >> resp;
        resp = toupper(resp);
        cin.get();
    }
    saida1.close();
    ifstream entrada("bin3", ios_base::in | ios_base::binary);
    cout << endl;
    cout << "Dados do arquivo";
    for(i = 0; i < qtde; i++)
    {
        cout << endl;
        entrada.read((char *) &pessoa1, sizeof(pessoa1));
        pessoa1.exibe();
    }
    entrada.close();
    return 0;
}
void pessoa :: le_dados()   //Definição do método le_dados()
{
    cout << " Nome: ";
    cin.get(nome, 20);
    cout << " Idade: ";
    cin >> idade;
    cout << "Salário: ";
    cin >> salario1;
}
void pessoa :: exibe()      //Definição do método exibe()
{
    cout << " Nome: " << nome << endl;
    cout << " Idade: " << idade << endl;
    cout << " Salario: " << salario1 << endl;
}
pessoa :: ~pessoa()         //Definição do destrutor
{
}