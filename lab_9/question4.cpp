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
    {
        if (balance - amount < 0)
        {
            cout << "Insufficient Balance" << endl;
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
    Account account1(12345, 2400.00);
    account1.print();
    return 0;
}