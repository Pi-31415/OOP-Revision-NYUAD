#include <iostream>
using namespace std;

struct Channel {
    int channel_no;
    string name;
    int day;
    int hour;
    int min;
};


int main()
{
    Channel channel1;
    channel1.day = 2;
    cout << channel1.day;
    return 0;
}