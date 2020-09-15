#include <iostream>
#include <iomanip>
#define EXCHANGE_RATE 3.67
using namespace std;

int main()
{

    double usd(0);
    cout << "Please Type in amount in USD : ";
    cin >> usd;
    cout.setf(ios::fixed); // Added to format to nearest cents
    cout << "USD " << setprecision(2)  << usd << " is equal to " << (usd*EXCHANGE_RATE) << " Dirhams." <<endl;
    return 0;
}