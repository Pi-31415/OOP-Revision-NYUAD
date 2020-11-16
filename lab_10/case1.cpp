#include <iostream>
#include <string>
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
        int max(0), gcd(0), n(0), d(0);
        bool gcd_exist = false;
        bool is_one = false;
        bool numerator_zero = false;
        bool denominator_one = false;
        bool is_negative = false;
        //Fraction is negative if either numerator or denominator is negative
        if (numerator < 0 || denominator < 0)
        {
            is_negative = true;
        }
        //If both numerator and denominator is negative, then it is positive
        if (numerator < 0 && denominator < 0)
        {
            is_negative = false;
        }

        n = abs(numerator);
        d = abs(denominator);

        if (n > d)
        {
            max = n;
        }
        else if (n < d)
        {
            max = d;
        }
        else
        {
            is_one = true;
        }

        if (n == 0)
        {
            numerator_zero = true;
        }

        if (d == 1)
        {
            denominator_one = true;
        }
        //Simplify the fraction by cancelling the gcd
        for (int i = 2; i <= max; i++)
        {
            if (n % i == 0 && d % i == 0)
            {
                gcd_exist = true;
                if (i > gcd)
                {
                    gcd = i;
                }
            }
        }
        //Then print out the values
        if (is_one)
        {
            if (is_negative)
            {
                cout << "-";
            }
            cout << 1;
        }
        else if (numerator_zero)
        {
            cout << 0;
        }
        else if (denominator_one)
        {
            if (is_negative)
            {
                cout << "-";
            }
            cout << n;
        }
        else
        {
            if (is_negative)
            {
                cout << "-";
            }
            if (gcd_exist)
            {
                if((d / gcd) == 1){
                    cout << (n / gcd);
                }else{
                    cout << (n / gcd) << "/" << (d / gcd);
                }
            }
            else
            {
                cout << n << "/" << d;
            }
        }
    }

    bool isZero(){
        if(numerator == 0){
            return true;
        }else
        {
            return false;
        }    
    }

    bool isInt(){
        if(numerator == 0 || numerator == denominator || denominator == 1 || (numerator%denominator) == 0){
            return true;
        }else
        {
            return false;
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

    Fraction FractionAdd(Fraction fraction1, Fraction fraction2){
        //Compare the decimal forms and present results
        int n1 = fraction1.getNumerator();
        int d1 = fraction1.getDenominator();
        int n2 = fraction2.getNumerator();
        int d2 = fraction2.getDenominator();
        int n_result = (n1*d2)+(n2*d1);
        int d_result = (d1*d2);
        Fraction result(n_result,d_result);
        return result;
    }

    bool greaterThan(Fraction AnotherFraction){
        //Compare the decimal forms and present results
        double other_numerator = AnotherFraction.getNumerator();
        double other_denominator = AnotherFraction.getDenominator();
        double other_decimal = other_numerator/other_denominator;

        double current_numerator = numerator;
        double current_denominator = denominator;
        double current_decimal = current_numerator/current_denominator;

        if(current_decimal > other_decimal){
            return true;
        }else{
            return false;
        }

    }

};

int main()
{

    Fraction f1(2, 4);
    Fraction f2(3, 4);


    f1.printFraction();
    cout<<endl;
    f2.printFraction();
    cout<<endl;


    f1.greaterThan(f2);

    return 0;
}