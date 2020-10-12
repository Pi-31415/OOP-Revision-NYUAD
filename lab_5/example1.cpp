#include <iostream>
using namespace std;

int return_seconds(int hour, int minute, int seconds)
{
    return (hour * 3600) + (minute * 60) + (seconds);
}

int main()
{
    int hour(0), minute(0), seconds(0);
    cout << "Input hour : ";
    cin >> hour;
    cout << "Input minute : ";
    cin >> minute;
    cout << "Input second : ";
    cin >> seconds;
    cout << endl
         << "Total seconds in " << hour << " hours, " << minute << " minutes, " << seconds << " seconds are " << return_seconds(hour, minute, seconds) << " seconds.";
}