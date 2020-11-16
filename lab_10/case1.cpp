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
        int max = 0;
        /*determine the larger value in fraction*/
        if (n > d)
        {
            max = n;
        }
        else
        {
            max = d;
        }

        for (int i = 0; i <= max; i++)
        {
            if (n % i == 0 && d % i == 0)
            {
                numerator = n / i;
                denominator = d / i;
            }
            else
            {
                numerator = n;
                denominator = d;
            }
        }
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

    return 0;
}