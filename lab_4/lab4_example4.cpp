#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //This program copy the contents of one file (source) into another file (target)
    // Create a text string, which is used to output the text file

    string source_filename("");
    string target_filename("");

    cout << "Enter source filename : ";
    //Prompts user for the filename in current directory
    getline(cin, source_filename);
    ifstream inputfile(source_filename);
    //Fall back if file cannot be open
    if (inputfile.fail())
    {
        cout << "Cannot open file " << source_filename << "Exiting " << endl;
        exit(1);
    }

    cout << "Enter target filename : ";
    //Prompts user for the filename in current directory
    getline(cin, target_filename);
    ofstream outputfile(target_filename, ios::trunc);
    //Fall back if file cannot be open
    if (outputfile.fail())
    {
        cout << "Cannot open file " << target_filename << "Exiting " << endl;
        exit(2);
    }

    //Then copy char by char
    char ch;
    while (!inputfile.eof())
    {
        inputfile.get(ch);
        outputfile << ch;
    }

    cout << "Copying content from " << source_filename << " to " << target_filename << " successful." << endl;

    inputfile.close();
    outputfile.close();
}

/*
Program output

Enter source filename : rocket1.txt
Enter target filename : testfile.dat
Copying content from rocket1.txt to testfile.dat successful.
*/