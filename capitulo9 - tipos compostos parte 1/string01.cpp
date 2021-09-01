//string01.cpp
#include <iostream>
using namespace std;
int main()
{
    char texto [7] = "Objeto";
    int i = 0;
    while(texto[i] != '\0')
    {
        cout << texto[i] << endl;
        i++;
    }
    return 0;
}