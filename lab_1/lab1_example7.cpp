#include <iostream>
#include <iomanip>
#include <cmath>
#define COLUMN_WIDTH 30
using namespace std;

int main()
{
    double loan_amount(0), annual_rate(0), years(0);
    cout << "Please enter loan amount : ";
    cin >> loan_amount;
    cout << "Please enter annual interest rate (%) : ";
    cin >> annual_rate;
    double monthly_rate = (annual_rate / (100 * 12)); // monthly rate is 1/12 of annual rate and not in percentage format
    cout << "Please enter length in years : ";
    cin >> years;
    double months = years * 12;

    double monthly_payment = (loan_amount * monthly_rate) / (1 - pow((1 + monthly_rate), (-months)));

    cout.setf(ios::left);
    cout.setf(ios::fixed);
    cout << endl;
    cout << setw(COLUMN_WIDTH) << "Loan Amount";
    cout << setw(COLUMN_WIDTH) << "Annual Interest Rate";
    cout << setw(COLUMN_WIDTH) << "Years";
    cout << setw(COLUMN_WIDTH) << "Monthly Payment" << endl;
    cout << setw(COLUMN_WIDTH) << setprecision(2) << loan_amount << setw(COLUMN_WIDTH) << annual_rate << setw(COLUMN_WIDTH) << setprecision(1) << years << setw(COLUMN_WIDTH) << setprecision(2) << monthly_payment << endl;

    /*
    Example Output

    Please enter loan amount : 50000
    Please enter annual interest rate (%) : 11.5
    Please enter length in years : 25

    Loan Amount                   Annual Interest Rate          Years                         Monthly Payment               
    50000.00                      11.50                         25.0                          508.23  
    */
}