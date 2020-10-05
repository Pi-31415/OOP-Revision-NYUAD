#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int data(0);

    ofstream outfile;
    outfile.open("Number.txt");

    if (outfile.fail()) 
    {
        cerr << "File Number.txt could not be opened";
        exit(1); 
    }

    cout << "Enter 10 numbers." << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Number " << i << " : ";
        cin >> data;
        outfile << data << endl;
    }

    outfile.close();

    ifstream infile;
    infile.open("Number.txt");

    cout << "Reading from the file" << endl;

    for (int i = 0; i < 10; i++)
    {
        infile >> data;
        cout << data << endl;
    }

    infile.close();

    return 0;
}

/*
Input

Enter 10 numbers.
Number 1 : 11
Number 2 : 12
Number 3 : 13
Number 4 : 14
Number 5 : 15
Number 6 : 16
Number 7 : 17
Number 8 : 18
Number 9 : 19
Number 10 : 20

Output 

Reading from the file
11
12
13
14
15
16
17
18
19
20
*/