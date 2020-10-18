#include <iostream>
#include <fstream>
using namespace std;

void readData();

int main()
{

    //sensor1 >> x; // read data from file and save in x

    return 0;
}

void readData()
{
    ifstream file;
    file.open("");
    if (file.fail()) //detect file open failure
    {
        cerr << "Answer file could not be opened.";
        exit(1);
    }
}