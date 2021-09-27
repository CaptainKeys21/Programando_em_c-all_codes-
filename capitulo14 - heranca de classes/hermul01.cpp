//hermul01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class func                  //Declaração da classe-base funcionário
{
    public:
        ~func();            //Protótipo do destrutor
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do método exibe()
    private:
        char snome[10];
        char cpf[10];
};
class escol                 //Declaração da classe-base escolaridade
{
    public:
        ~escol();           //Protótipo do destrutor
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do método exibe()
    private:
        char univ[8];
        char grau;
};
class prof : public func, public escol  //Deflaração da classe derivada professor
{
    public:
        void le_dados();    //Protótipo do método le_dados()
        void exibe();       //Protótipo do método exibe()
    private:
        short int npub;
};
class auxil : public func   //Declaração da classe derivada auxiliar
{
};
//Definição da função main()
int main()
{
    prof prof1;             //Cria o objeto prof1. Utiliza o construtor default
    auxil auxil1;           //Cria o objeto auxil1. Utiliza o construtor default
    cout << "Digite os dados do professor" << endl;
    prof1.le_dados();
    cout << "Digite os dados do auxiliar" << endl;
    auxil1.le_dados();
    cout << endl;
    cout << "O professor é:" << endl;
    prof1.exibe();
    cout << "O auxiliar é:" << endl;
    auxil1.exibe();
    return 0;
}
//Métodos da classe-base func
void func :: le_dados()     //Definição do método le_dados()
{
    cout << " Sobrenome: ";
    cin >> snome;
    cout << " CPF: ";
    cin >> cpf;
}
void func :: exibe()        //Definição do método exibe()
{
    cout << " Sobrenome: " << snome << endl;
    cout << " CPF: " << cpf << endl;
}
func :: ~func()             //Definição do destrutor
{
}
//Métodos da classe-base escolaridade
void escol :: le_dados()    //Definição do método le_dados()
{
    cout << " Universidade: ";
    cin >> univ;
    cout << " Grau (M = Mestre, D = Doutor): ";
    cin >> grau;
}
void escol :: exibe()       //Definição do método exibe()
{
    cout << " Universidade: " << univ << endl;
    cout << " Grau: " << grau << endl;
}
escol :: ~escol()           //Definição do destrutor
{
}
//Métodos da classe-derivada professor
void prof :: le_dados()     //Definição do método le_dados()
{
    func :: le_dados();
    escol :: le_dados();
    cout << " N° de publicações: ";
    cin >> npub;
}
void prof :: exibe()        //Definição do método exibe()
{
    func :: exibe();
    cout << " N° de publicações: " << npub << endl;
    escol :: exibe();
}