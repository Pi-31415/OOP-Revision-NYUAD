#include <iostream>
using namespace std;

int main()
{
    int ctr1, ctr2;
    for (ctr1 = 1; ctr1 <= 6; ctr1 = ctr1 + 2)
    {
        for (ctr2 = 2; ctr2 <= 5; ctr2 = ctr2 + 3)
        {
            cout << "ctr1 = " << ctr1 << " , ctr2 = " << ctr2 << endl;
        }
    }
}


/*
Should give
1   2
1   5
3   2
3   5
5   3
5   5

Actual output : 
ctr1 = 1 , ctr2 = 2
ctr1 = 1 , ctr2 = 5
ctr1 = 3 , ctr2 = 2
ctr1 = 3 , ctr2 = 5
ctr1 = 5 , ctr2 = 2
ctr1 = 5 , ctr2 = 5
*/