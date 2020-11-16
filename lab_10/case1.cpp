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
        else if(n < d)
        {
            max = d;
        }else{

        }

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

    Fraction f1(1,2);
    f1.printFraction();
    return 0;
}