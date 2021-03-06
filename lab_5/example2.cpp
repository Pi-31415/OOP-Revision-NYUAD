#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool check_prime(int number)
{
    int i;
    bool is_prime = true;
    if (number == 0 || number == 1)
    {
        //first if number is 0 or if number is 1, it is prime
        is_prime = false;
    }
    else
    {
        //divide by all numbers less than the square root of the number (for optimization),
        // if not divisible, it is a prime
        for (i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime)
        return true;
    else
        return false;
}

int main()
{
    //Open a new file, write prime numbers
    ofstream file;
    file.open("Prime.txt", ios::trunc);

    cout << "Prime Checking Program" << endl;
    for (int i = 2; i <= 10000; i++)
    {
        //Write all prime numbers to file
        if (check_prime(i))
        {
            file << i << endl;
            cout << i << endl;
        }
    }
    file.close();

    return 0;
}
