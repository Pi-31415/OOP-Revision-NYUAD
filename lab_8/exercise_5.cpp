#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x(0), y(0), time(0), radius(0);
    ifstream robotdata;
    robotdata.open("robotdata.dat");
    if (robotdata.fail())
    {
        cerr << "File could not be opened";
        exit(1);
    }

    for (int i = 0; i < ; i++)
    {
        robotdata >>
    }

    robotdata.close();

    return 0;
}