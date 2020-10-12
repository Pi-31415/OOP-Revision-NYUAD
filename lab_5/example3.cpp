#include <iostream>
using namespace std;

double Cel_to_Fahr(double celsius)
{
    return (celsius * (9 / 5)) + 32;
}

double Cel_to_Kel(double celsius)
{
    return celsius + 273.2;
}

int main()
{
    while (!cin.eof())
    {
        cout << Cel_to_Kel(100);
    }
    return 0;
}