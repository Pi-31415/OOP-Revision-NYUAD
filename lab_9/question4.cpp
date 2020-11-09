#include <iostream>
using namespace std;

class Account
{
public:
    int AccountNumber;
    double balance;

private:
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
        balance -= amount;
    }

    void print(){
        
    }
};

int main()
{

    return 0;
}