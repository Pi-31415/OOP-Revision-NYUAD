#include <iostream>
#include <fstream>
#include <cmath>
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
        return number;
    else
        return 0;
}

int main()
{
    //Open a new file, write prime numbers
    ofstream file;
    file.open ("Prime.txt",ios::trunc);
    
    cout << "Prime Checking Program"<<endl;
    for (int i = 2; i <= 10000; i++)
    {
        //Write all prime numbers to file
        if(check_prime(i) != 0){
            file << check_prime(i) << endl;
        }
    }
    file.close();

    

    return 0;
}

/*
Write a function that determines whether a number is prime or not (the function should return true if the number is prime and false otherwise). Use this function to find all prime numbers between 2 and 10000 and store them in a text file “Prime.txt”. Read the data back from “Prime.txt” and display it on the standard output. 

*/