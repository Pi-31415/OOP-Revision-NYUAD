#include <iostream>

using namespace std;

// Class average , Counter-Controlled loop

int main()
{

    //initialize all variables with 0
    float number_of_students(0), individual_mark(0), total_mark(0),average(0);

    cout << "Please input the number of students : ";
    cin >> number_of_students;

    // After user input the number,
    for (int i = 1; i <= number_of_students; i++)
    {
        cout << "Mark of student # "<<i<<" : ";
        cin >> individual_mark;
        total_mark += individual_mark;
    }

    //Then calculate the average
    average = total_mark/number_of_students;
    cout << "\n\nTotal Mark = "<<total_mark<<"\n";
    cout << "\n\nClass Average= "<<average<<"\n";

}


/*
Test Cases:
Class size : 5
Marks : 10, 20, 30, 40, 50
Average : 30


Program Output :

Please input the number of students : 5
Mark of student # 1 : 10
Mark of student # 2 : 20
Mark of student # 3 : 30
Mark of student # 4 : 40
Mark of student # 5 : 50


Total Mark = 150


Class Average= 30

*/