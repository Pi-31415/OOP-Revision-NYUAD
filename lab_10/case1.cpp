#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int n = 1, int d = 1)
    {
        numerator = n;
        denominator = d;
    }

    void printFraction()
    {
        cout << numerator << "/" << denominator;
    }

    int getNumerator()
    {
        return numerator;
    }

    int getDenominator()
    {
        return denominator;
    }
};

int main()
{

    Fraction f1(2,4);
    //f1.printFraction();
    return 0;
}