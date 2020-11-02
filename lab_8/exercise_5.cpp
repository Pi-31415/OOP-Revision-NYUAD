#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double *xptr,*yptr,*tptr;
    int radius(0),size(0);
    ifstream robotdata;
    robotdata.open("robotdata.dat");
    if (robotdata.fail())
    {
        cerr << "File could not be opened";
        exit(1);
    }

    cin >> radius;
    robotdata >> size;

    xptr = new double[size];

    for (int i = 0; i < points; i++)
    {
        robotdata >>
    }

    robotdata.close();

    return 0;
}