#include <iostream>

using namespace std;

void guessing(int random_number)
{
    cout << random_number;
    

}

int main()
{
    srand(1);
    while (cin.eof() != true)
    {
        int random_number = rand() % 10;
        guessing(random_number);
    }
}