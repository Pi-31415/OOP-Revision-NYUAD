#include <iostream>
using namespace std;

class Account
{
private:
    int AccountNumber;
    double balance;

public:
    Account(int an = 1234, double b = 0.0)
    {
        AccountNumber = an;
        balance = b;
    }

    int getAccountNumber()
    {
        return AccountNumber;
    }

    double getBalance()
    {
        return balance;
    }

    void credit(double amount)
    {
        balance += amount;
    }

    void debit(double amount)
    {   //subtracts a certain amount from balance if sufficient
        if (balance - amount < 0)
        {
            cout << "Insufficient Balance." << endl;
        }
        else
        {
            balance -= amount;
        }
    }

    void print()
    {
        cout << "A/C no : " << AccountNumber << " Balance : " << balance << endl;
    }
};

int main()
{
    //Testing functions
    Account account1(12345, 2400.00);
    account1.print();

    cout << "Debit 100 dollars" << endl;
    account1.debit(100);
    account1.print();
    return 0;
}

/*
Output:

A/C no : 12345 Balance : 2400
Debit 100 dollars
A/C no : 12345 Balance : 2300

*/