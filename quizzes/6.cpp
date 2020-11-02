#include<iostream>

using namespace std;

int main(){
    double num = 0.10;
    // change int to double in pointer
    double *myPtr = &num;
    
    int size = 10;
    //add an * to convert to pointer for dynamic memory allocation
    double *newArr = new double[size];

    for(int i = 0; i < size; i++)
        newArr[i] = i + *myPtr;
    
    delete newArr;
    
}