//metvir03.cpp
#include <iostream>
using namespace std;
void LimpaTela();
void menu();
class FormasGeo                     //Declaração da classe-base formas geométricas
{
    public:
        virtual ~FormasGeo();       //Protótipo do destrutor virtual
        virtual void desnehar();    //Protótipo do método virtual desenhar()
};
class quadrado : public FormasGeo   //Declaração da classe derivada quadrado
{
    public:
        void desenhar();            //Protótipo do método desenhar()
};
class retang : public FormasGeo     //Declaração da classe derivada retang
{
    public:
        void desenhar();            //Protótipo do método desenhar()
};
//Definição da função main()
int main()
{
    quadrado quadrado1;             //Cria o objeto quadrado1
    retang retang1;                 //Cria o objeto retang1
    FormasGeo *ptr;                 //Ponteiro para classe-base
    char opcao, tecla;
    menu();
    cin >> opcao;
    while(opcao != '3')
    {
        switch(opcao)
        {
            case '1':
                LimpaTela();        //Chama a função LimpaTela()
                //Atribui o endereço do objeto quadrado1 à ptr
                ptr = &quadrado1;
                //Chama o método desenhar() da classe derivada quadrado
                ptr -> desnehar();
                cin >> tecla;
                break;
            case '2':
                LimpaTela();        //Chama a função LimpaTela()
                //Atribui o endereço do objeto retang1 à ptr
                ptr = &retang1;
                //Chama o método desenhar() da classe derivada retang
                ptr -> desnehar();
                cin >> tecla;
                break;
            case '3':
                break;
        }
        
    }
    menu();                         //Chama a função menu()
    cin >> opcao;
    LimpaTela();                    //Chama a função LimpaTela()
    cout << endl;
    return 0;
}
//Métodos da classe-base FormasGeo
void FormasGeo :: desnehar()        //Definição do método desenhar()
{
}
FormasGeo :: ~FormasGeo()           //Definição do destrutor virtual
{
}
//Métodos da classe-derivada quadrado
void quadrado :: desenhar()         //Definição do método desenhar()
{
    cout << "Classe derivada quadrado" << endl << endl;
    int i, k;
    for(i = 1; i < 3; i++)
    {
        cout.width(7);
        for(k = 1; k < 4; k++)
            cout << "x";
        cout << endl;
    }
    cout << endl;
    cout << "Pressione uma tecla e Enter ";
}
//Métodos da classe-derivada retang
void retang :: desenhar()           //Definição do método desenhar()
{
    cout << "Classe derivada retang" << endl << endl;
    int i, k;
    for(i = 1; i < 3; i++)
    {
        cout.width(7);
        for(k = 1; k < 18; k++)
            cout << "x";
        cout << endl;
    }
    cout << endl;
    cout << "Pressione uma tecla e Enter ";
}
void menu()                         //Definição da funnnnção menu()
{
    LimpaTela();
    cout.width(40);
    cout << "DESENHO DE FORMAS GEOMÉTRICAS" << endl << endl;
    cout.width(35);
    cout << "1 - Quadrado " << endl << endl;
    cout.width(35);
    cout << "2 - Retângulo " << endl << endl;
    cout.width(35);
    cout << "3 - Sair " << endl << endl;
    cout.width(35);
    cout << "Digite uma opção: ";
}
void LimpaTela()                    //Definição da função LimpaTela()
{
    cout << "\03[2j";
    cout << "\33[0;0f";
}