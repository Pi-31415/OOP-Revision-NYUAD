#include <iostream>

using namespace std;
// Instead of returning the value, store the results directly by passing by reference
int swap_variables(int a, int b, int &x, int &y)
{
    a = x;
    b = y;
    x = b;
    y = a;
}

int main()
{
    int x(1),y(2);
    cout << "Before Swapping" <<endl;
    cout << "x : " <<x <<endl;
    cout << "y : " <<y <<endl;
    //swap the variables
    swap_variables(x,y,x,y);
    cout << "After Swapping" <<endl;
    cout << "x : " <<x <<endl;
    cout << "y : " <<y <<endl;
    return 0;
}