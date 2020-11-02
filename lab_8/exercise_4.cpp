#include <iostream>
using namespace std;

int char_count(char *ptr, char c);

int main()
{
    int times(0);
    char mystring[] = "Test String";
    char_count(&mystring[0], 's');
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
        cout << *ptr << endl;
        ptr++;
        
    }
    return times;
}