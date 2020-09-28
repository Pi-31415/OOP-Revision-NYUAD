#include <iostream>

using namespace std;

int main()
{
    int x, sum = 0;
    for (int i = 1; i <= 10; ++i)
    {
        cin >> x;
        if (x > 10)
            break;
        sum += x;
    }
    //added cout for debugging
    cout << sum;
}

/*
Thoughts before compiling
-------------------------------------
The program will add the numbers 1 to 10 in the loop with break,
resulting in sum = 55

Replacing with continue will still give the same output
since the for loop has condition i <= 10

After compiling
-------------------------------------
I was wrong, the program with break; accepts 10 integers less than 10 from the user and adds them.
But it will stop execution as soon as user types anything larger than 10

If we replace with continue, the output will still be the same, but the program will ignore all values greater than 10 in adding.
*/