#include <iostream>
using namespace std;

int square(int num)
{
    int result = num * num;
    return result;
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "The square of this number is : " << square(num) << endl;
}

