#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream sensor1;
    sensor1.open("sensor1.txt");
    if (sensor1.fail()) //detect file open failure
    {
        cerr << "Answer file could not be opened.";
        exit(1); 
    }

    
    //sensor1 >> x; // read data from file and save in x

    return 0;
}