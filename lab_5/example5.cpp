#include <iostream>

using namespace std;

void guessing()
{
}

int main()
{
    srand(1);
    while (cin.eof() != true)
    {
        cout << rand() % 10 << endl;
        guessing();
    }
}