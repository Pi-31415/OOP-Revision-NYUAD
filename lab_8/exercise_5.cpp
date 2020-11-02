#include <iostream>
#include <fstream>

using namespace std;

/*
Question:

Write a program that reads a data file that contains the time (second) 
and coordinates of the position of a robot that is roaming in unknown space. 
The first row stores the number of readings. Each subsequent line includes the 
time, the x coordinate, and the y coordinate for the robot. The program should 
determine the times when the robot comes inside a circle centered at the origin 
with a radius R (entered by the user). Use dynamic memory allocation to create 
run-time arrays for storing the time, x coordinate, and y coordinate.

*/

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