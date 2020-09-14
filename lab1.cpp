#include <iostream>		// Required for cout, cin, endl
using namespace std;	// The compiler will use all the library filenames in std
// The main function - the starting point of our program
int main() {
	// Declare and initialize objects
	char myChar('c');
	int myInt(3);
	float myFloat = 5.4321f;

	// Print values
	cout << "Value of myChar: " << myChar << ", value of myInt: " << myInt << 
	", value of myFloat: " << myFloat << endl;

	// Assign character to integer (Check Table 2.3 in the Textbook).
	myInt = myChar;

	// Print values
	cout << "Value of myChar: " << myChar << ", value of myInt: " << myInt << 
	", value of myFloat: " << myFloat << endl;

	// Assign float to integer
	myInt = myFloat;

	// Print values, what do you notice?
	cout << "Value of myChar: " << myChar << ", value of myInt: " << myInt << 
	", value of myFloat: " << myFloat << endl;

	// Exit program
	return 0;
}
