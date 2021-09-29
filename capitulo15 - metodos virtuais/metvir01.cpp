//metvir01.cpp
#include <iostream>
using namespace std;
void LimpaTela();
void menu();
class FormasGeo                     //Declaração da classe-base formas geométricas
{
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
    char opcao, tecla;
    menu();                         //Chama a função menu()
    cin >> opcao;
    while(opcao != '3')
    {
        switch(opcao)
        {
            case '1':
                LimpaTela();        //Chama a função LimpaTela()
                //Objeto quadrado1 chama o método desenhar()
                quadrado1.desenhar();
                cin >> tecla;
                break;
            case '2':
                LimpaTela();        //Chama a função LimpaTela()
                //Objeto retang1 chama o método desenhar()
                retang1.desenhar();
                cin >> tecla;
                break;
            case '3':
                break;
        }
        menu();                     //Chama a função menu()
        cin >> opcao;
    }
    LimpaTela();                    //Chama a função LimpaTela()
    cout << endl;
    return 0;
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
void menu()                         //Definição da função menu()
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
void LimpaTela()                    //Definição da funnção LimpaTela()
{
    cout << "\033[2j";
    cout << "\033[0;0f";
}