#include <iostream>
#define CHARACTER_NUMBER 9
using namespace std;

void search(const char array[], char key, int array_size);

int main()
{

    char characters[CHARACTER_NUMBER];
    //Assign null character as initial value
    //assume user will not input that
    char key_char('\0');
    //collect characters into array
    for (int i = 0; i < CHARACTER_NUMBER; i++)
    {
        cout << "Enter Character # " << (i + 1) << " : ";
        cin >> characters[i];
    }
    //collect key character to search
    cout << endl
         << "Enter Key Character to search : ";
    cin >> key_char;
    cout << endl;
    
    //search
    search(characters, key_char, CHARACTER_NUMBER);
    return 0;
}

void search(const char array[], char key, int array_size)
{
    bool found = false;
    for (int i = 0; i < array_size; i++)
    {
        if (array[i] == key)
        {
            found = true;
            //Print a user-friendly found message
            cout << "Character " << key << " found in array {";
            for (int j = 0; j < array_size; j++)
            {
                cout << array[j];
                if (j != (array_size - 1))
                {
                    cout << ",";
                }
            }
            cout << "} at index " << i << "." << endl;
        }
    }
    if (!found)
    {
        //display not found message
        cout << "Character " << key << " is not found.";
    }
}

/*
Output

Enter Character # 1 : a
Enter Character # 2 : b
Enter Character # 3 : v
Enter Character # 4 : d
Enter Character # 5 : e
Enter Character # 6 : f
Enter Character # 7 : g
Enter Character # 8 : h
Enter Character # 9 : e

Enter Key Character to search : a
Character a found in array {a,b,v,d,e,f,g,h,e} at index 0 .

*/