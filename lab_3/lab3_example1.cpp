#include <iostream>
using namespace std;

int main()
{
    int count = 10;

    while (count > 0)
    {
        cout << count << endl;
        count -= 1;
    }
    return 0;
}

/*
Problems : 
1) Not declaring count as int
2) Not deducting value from the counter
3) The condition in while contains an =
*/