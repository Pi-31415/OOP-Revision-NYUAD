#include <iostream>
#include <iomanip>

#define ARR_SIZE 10
#define COLUMN_SIZE 15
using namespace std;

int main()
{
    //declare an array with the size of 10
    int arr[ARR_SIZE];

    for (int i = 0; i < ARR_SIZE; i++)
    {
        //assign the index of element in element
        arr[i] = i;
    }

    //set header
    cout.setf(ios::left);
    cout << setw(COLUMN_SIZE) << "Array Index";
    cout << setw(COLUMN_SIZE) << "Array Content" << endl;

    //print out the content of array
    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << setw(COLUMN_SIZE) << i << setw(COLUMN_SIZE) << arr[i] << endl;
    }

    return 0;
}

/*
Output

Array Index    Array Content  
0              0              
1              1              
2              2              
3              3              
4              4              
5              5              
6              6              
7              7              
8              8              
9              9   

*/