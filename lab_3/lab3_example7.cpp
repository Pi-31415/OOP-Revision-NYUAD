#include <iostream>
#include <iomanip>
#include <cmath>
#define TABLE_SIZE 10

using namespace std;

int main()
{
    int years(0);
    float rate(0.00), initial_acres(0), acres(0);

    cout << "Enter initial uncut acres  : ";
    cin >> initial_acres;

    cout << "Enter number of years : ";
    cin >> years;

    cout << "Enter reforestation rate in % : ";
    cin >> rate;
    rate = rate/100;

    cout.setf(ios::right);
    cout << endl << "-----------------------"<< endl;
    cout << "|" << setw(TABLE_SIZE) << "Year" << "|" << setw(TABLE_SIZE) << "Acres" << "|" << endl;
    cout << "-----------------------"<< endl;


    cout.setf(ios::fixed);
    for (int i = 0; i <= years; i++)
    {
        acres = initial_acres * pow((1 + rate), i);
        cout << "|" << setprecision(2) << setw(TABLE_SIZE) << i << "|" << setw(TABLE_SIZE) << acres << "|" << endl;
    }
    cout << "-----------------------"<< endl;
}


/*

Program Output : 

Enter initial uncut acres  : 2500
Enter number of years : 20
Enter reforestation rate in % : 2

-----------------------
|      Year|     Acres|
-----------------------
|         0|   2500.00|
|         1|   2550.00|
|         2|   2601.00|
|         3|   2653.02|
|         4|   2706.08|
|         5|   2760.20|
|         6|   2815.41|
|         7|   2871.71|
|         8|   2929.15|
|         9|   2987.73|
|        10|   3047.49|
|        11|   3108.44|
|        12|   3170.60|
|        13|   3234.02|
|        14|   3298.70|
|        15|   3364.67|
|        16|   3431.96|
|        17|   3500.60|
|        18|   3570.61|
|        19|   3642.03|
|        20|   3714.87|
-----------------------

*/