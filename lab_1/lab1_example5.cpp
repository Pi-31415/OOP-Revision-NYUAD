#include <iostream>
#include <iomanip>
#define EXCHANGE_RATE 3.67
using namespace std;

int main()
{

    double usd(0);
    cout << "Please Type in amount in USD : ";
    cin >> setprecision(3) >> usd;
    cout << "USD " << usd << " is equal to " << setprecision(3) << (usd*EXCHANGE_RATE) << " Dirhams." <<endl;
    return 0;
}