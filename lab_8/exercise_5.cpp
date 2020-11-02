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

    cout << "Please Enter Radiuss : ";
    cin >> radius;

    robotdata >> size;

    xptr = new double[size];
    yptr = new double[size];
    tptr = new double[size];

    for (int i = 0; i < size; i++)
    {
        robotdata >> tptr[i] >> xptr[i] >> yptr[i];
    }

    robotdata.close();

    

    return 0;
}