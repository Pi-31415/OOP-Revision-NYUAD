#include <iostream>
#include <fstream>

using namespace std;

int main()
{   int x(0),y(0),time(0);
    ifstream robotdata;
    robotdata.open("robotdata.dat");
    if (robotdata.fail()) 
    {
        cerr << "File could not be opened";
        exit(1); 
    }
    robotdata >> x; 
    return 0;
}