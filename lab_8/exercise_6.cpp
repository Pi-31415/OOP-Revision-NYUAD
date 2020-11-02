/*
Prompt:
Write a program that dynamically resize an array to a bigger size. 
The program creates an array of an arbitrary size (specified by the user). 
Then the user may extend the array to a bigger size (this involves creating a temporary 
array with larger size, copying the values of the elements, and adding new values into 
the extension cells). 
Print the new array to the user to confirm the functionality.

*/

#include <iostream>
using namespace std;

int main(){
    int initialsize(0),finalsize(0);
    cout << "Enter Initial Array Size : ";
    cin >> initialsize;

    char *initarray = new char[initialsize];

    for (int i = 0; i < size; i++)
    {   
        cout << "Enter a character for element";
        cin >> initarray[i];
    }

    return 0;
}