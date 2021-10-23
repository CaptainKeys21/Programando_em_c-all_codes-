//cout12.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num, qua, cub;
    cout << "Numero" << setw(10) << "Quadrado" << setw(6) << "Cubo" << endl;
    for (num = 2; num < 6; num++)
    {
        cout << setw(3) << num;
        qua = num * num;
        cout << setw(10) << qua;
        cub = qua * num;
        cout << setw(9) << cub << endl;
    }
    return 0;
}