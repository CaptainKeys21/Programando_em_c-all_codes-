//hermul02.cpp
#include <iostream>
using namespace std;
class ClaBase1          //Declaração da classe-base
{
    public:
        void exibe();
};
class ClaBase2          //Declaração da classe-base
{
    public:
        void exibe();
};
//Declaração de classe derivada
class ClaDeriv : public ClaBase1, public ClaBase2
{
};
int main()
{
    ClaDeriv objderiv;  //Cria o objeto da classe derivada
    //Chamada qualificada ao método exibe() da classe-base ClaBase1
    objderiv.ClaBase1 :: exibe();
    //Chamada qualificada ao método exibe() da classe-base ClaBase2
    objderiv.ClaBase2 :: exibe();
    //objderiv.exibe();
    return 0;
}
//A linha "objderiv.exibe();" ocasionaria um erro na compilação,
//pois o compilador não saberia qual dos métodos exibe() chamar.
//Métodos da classe-base ClaBase1
void ClaBase1 :: exibe()
{
    cout << "Classe-base 1" << endl;
}
//Métodos da classe-base ClaBase2
void ClaBase2 :: exibe()
{
    cout << "Classe-base 2" << endl;
}