#include <iostream>
#include <fstream>
#include <cmath>
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
    //Read data from source file
    robotdata >> size;

    xptr = new double[size];
    yptr = new double[size];
    tptr = new double[size];

    for (int i = 0; i < size; i++)
    {
        robotdata >> tptr[i] >> xptr[i] >> yptr[i];
    }

    robotdata.close();

    cout << "Please Enter Radius : ";
    cin >> radius;

    for (int i = 0; i < size; i++)
    {
        //use the circle equation to determine whether
        // the robot is in or out of the circle
        if(pow(xptr[i],2) + pow(yptr[i],2) < pow(radius,2)){
            cout << "Robot inside circle at time : " << tptr[i] <<", x = "<< xptr[i] <<", y = "<< yptr[i]<<endl;
        }else if(pow(xptr[i],2) + pow(yptr[i],2) < pow(radius,2)){
            cout << "Robot on circle at time : " << tptr[i] <<", x = "<< xptr[i] <<", y = "<< yptr[i]<<endl;
        }  
    }
    //deallocate the memory
    delete [] xptr;
    delete [] yptr;
    delete [] tptr;

    return 0;
}