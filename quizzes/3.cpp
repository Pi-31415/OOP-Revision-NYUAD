#include <iostream>
using namespace std;

int main()
{

    int counter = 1;
    while (counter <= 30)
    {
        if (counter % 2 == 0)
        {
            cout << counter << " ";
        }

        counter++;
    }
}