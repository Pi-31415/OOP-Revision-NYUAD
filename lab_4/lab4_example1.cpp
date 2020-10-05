#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int data(0);

    ofstream outfile;
    outfile.open("Number.txt");
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