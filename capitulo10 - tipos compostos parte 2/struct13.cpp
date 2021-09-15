//struct13.cpp
#include <iostream>
using namespace std;
int main()
{
    struct computador
    {
        char cpu[20];
        mutable int ram;
    };
    const computador micro = {"Pentium 4", 128};
    micro.ram = 256;
    cout << micro.cpu << " - ";
    cout << micro.ram << " MB" << endl;
    return 0;
}