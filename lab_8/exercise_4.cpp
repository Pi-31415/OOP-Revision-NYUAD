#include <iostream>
using namespace std;

int char_count(char *ptr, char c);

int main()
{
    int times(0);
    char mystring[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et";
    times = char_count(&mystring[0], 's');

    cout << "The character s occurs for "<<times<<" times."<<endl;
    return 0;
}

int char_count(char *ptr, char c)
{
    int times(0);
    while (*ptr != '\0')
    {
        if(*ptr == c){
            times++;
        }
        ptr++;
    }
    return times;
}

/*
Output

The character s occurs for 6 times.
*/