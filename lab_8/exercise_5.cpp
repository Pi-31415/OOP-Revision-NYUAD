#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double *xptr,*yptr,*tptr;
    int radius(0),points(0);
    ifstream robotdata;
    robotdata.open("robotdata.dat");
    if (robotdata.fail())
    {
        cerr << "File could not be opened";
        exit(1);
    }

    cin >> radius;
    robotdata >> points;

    for (int i = 0; i < points; i++)
    {
        robotdata >>
    }

    robotdata.close();

    return 0;
}