#include <iostream>
#include <string>
using namespace std;

int main()
{
  while (1) // an infinite loop to check
  {
    // When workinig with cin, translation of ASCII does not seem to occur
    // if cin is 0, boolean returns false
    // if cin is 1, boolean returns true
    // else, cin results in an error, and boolean returns what is predefined, and infinite loop will result
    bool condition = 1;
    cout << "Enter your input : ";
    cin >> condition;
    cout << boolalpha << condition << endl;
  }
  return 0;
}
