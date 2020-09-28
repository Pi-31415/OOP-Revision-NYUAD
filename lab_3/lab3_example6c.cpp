#include <iostream>

using namespace std;

// Class average , End-Of-Data loop

int main()
{

    //initialize all variables with 0
    float individual_mark(0), total_mark(0), average(0);
    int i(0);

    cout << "Mark of student # " << (i + 1) << " : ";
    cin >> individual_mark;

    cout << "Please type in the marks for the students. Press Ctrl+D to end."<<endl;
    // Run an infinite loop until user inputs EOF via Ctrl+D
    while (!cin.eof())
    {
        //add the input to total marks
        total_mark += individual_mark;
        i++;
        //Prompts the next student's mark
        cout << "Mark of student # " << (i + 1) << " : ";
        cin >> individual_mark;
    }

    //Then calculate the average
    average = total_mark / i;
    cout << "\n\nTotal Mark = " << total_mark << "\n";
    cout << "\n\nClass Average= " << average << "\n";
}


/*
Test Cases:
Class size : 5
Marks : 10, 20, 30, 40, 50
Average : 30


Program Output :

Mark of student # 1 : 10
Mark of student # 2 : 20
Mark of student # 3 : 30
Mark of student # 4 : 40
Mark of student # 5 : 50
Mark of student # 6 : ^D

Total Mark = 150


Class Average= 30

(base) Paings-MacBook-Pro-2:lab_3 paingthetko$ 

*/