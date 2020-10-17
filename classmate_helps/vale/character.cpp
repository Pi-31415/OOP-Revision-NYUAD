#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    // Read from the text file
    ifstream MyReadFile("data.txt");

    double mass(0), stiffness(0), damping(0);
    string collected(""); // temporary container
    int state(0), data(1); // state determines whether collecting mode is on or off 0 means off, 1
    char ch;
    while (!MyReadFile.eof())
    {
        MyReadFile.get(ch);
        if (ch == '=')
        {
            state = 1;
            //turn on the collecting mode
        }
        if (state == 1 && ch != ' ' && ch != '=')
        {
            // if collecting is on, and current char is not space, and not equal
            collected.push_back(ch);
        }
        if (ch == '\n' || ch == '\r')
        {
            //detect new line
            state = 0; // turn off the collecting mode
            if (data == 1)
            {
                mass = stod(collected); // string to double  "100" => 100 || a
            }
            else if (data == 2)
            {
                stiffness = stod(collected);
            }
            else if (data == 3)
            {
                damping = stod(collected);
            }
            collected = ""; //temporary container
            data++;
        }

        cout << ch;
    }

    cout << "detected mass: " << mass << endl;
    cout << "detected stiffness: " << stiffness << endl;
    cout << "detected damping: " << damping << endl;
    // Close the file
    MyReadFile.close();

    return 0;
}