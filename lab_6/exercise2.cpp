#include <iostream>

using namespace std;

int detect_missing(const int arr[],int n);

int main(){
    //missing number is 3
    //Assume these integers are in the range of 1 to n. There are no duplicates in the list. 
    int integers[4] = {1,2,4,5};

    cout << "Missing integer is " << detect_missing(integers,5) << endl;

    return 0;
}

int detect_missing(const int arr[],int n){

    int total = 0;

    for(int i=0;i<(n-1);i++){
        //find the total of all integers in array
        total += arr[i];
    }

    //return the missing integer using the formula
    int missing_integer = (((n)*(n+1))/2) - total ;

    return missing_integer;
}

/*
Output

Missing integer is 3

*/