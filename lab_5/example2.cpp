#include <iostream>
#include <fstream>
using namespace std;

int check_prime(int number)
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
        //divide by all numbers less than number,
        // if not divisible, it is a prime
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime)
        return number;
    else
        return 0;
}

int main()
{
    cout << "Prime Checking Program"<<endl;
    for (int i = 2; i <= 100; i++)
    {
        if(check_prime(i) != 0){
            cout << check_prime(i) << endl;
        }
    }

    return 0;
}