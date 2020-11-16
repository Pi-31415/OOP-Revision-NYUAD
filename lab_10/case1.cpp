#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    //Default constructor
    Fraction(int n = 1, int d = 1)
    {
        if (d == 0)
        {
            cout << "Warning : Denominator cannot be 0 in fraction and it has been replaced with 1." << endl;
            numerator = n;
            denominator = 1;
        }
        else
        {
            numerator = n;
            denominator = d;
        }
    }

    void printOriginalFraction()
    {
        //This method prints the fraction in original form
        cout << numerator << "/" << denominator << endl;
    }

    void printFraction()
    {
        //This method will reduce the fraction to simplest terms, by dividing with
        // Greatest Common Divisor
        int max = 0;
        int gcd = 0;
        bool gcd_exist = false;
        bool is_one = false;
        bool numerator_zero = false;
        bool denominator_one = false;
        if (numerator > denominator)
        {
            max = numerator;
        }
        else if (numerator < denominator)
        {
            max = denominator;
        }
        else
        {
            is_one = true;
        }

        if (numerator == 0)
        {
            numerator_zero = true;
        }

        if (denominator == 1)
        {
            denominator_one = true;
        }
        //Simplify the fraction by cancelling the gcd
        for (int i = 2; i <= max; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd_exist = true;
                if (i > gcd)
                {
                    gcd = i;
                }
            }
        }
        if (is_one)
        {
            cout << 1 << endl;
        }
        else if (numerator_zero)
        {
            cout << 0 << endl;
        }else if(denominator_one){
            cout << numerator << endl;
        }
        else
        {
            if (gcd_exist)
            {
                cout << (numerator / gcd) << "/" << (denominator / gcd) << endl;
            }
            else
            {
                cout << numerator << "/" << denominator << endl;
            }
        }
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

    Fraction f1(2,0);
    f1.printFraction();
    return 0;
}