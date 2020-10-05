#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string filename("");

    cout << "Enter filename to analyze : ";
    getline(cin, filename);

    ifstream inputfile;
    // uses io:: in opening mode only for reading
    inputfile.open(filename, ios::in);

    if (inputfile.fail())
    {
        cerr << "File " << filename << " could not be opened." << endl;
        exit(1);
    }

    //initialize variables for counting
    int words(1), lines(1);
    //character to read the characters
    char ch;
    cout <<endl << "File Contents : " <<endl<<endl;
    while (!inputfile.eof())
    {
        inputfile.get(ch);
        if(ch == '\n'){
            //count as line when there is a new line character
            // Initial value of line is 1 since 1 new line character makes 2 lines
            lines++;
        }
        if(ch == '\n' || ch == '\t' || ch == 0x20 || ch == 0x0d){
            //count as word when there is a new line, tab or space or carriage return
            // Initial value of line is 1 since 1 white space character makes 2 words
            words++;
        }
        //Print the file for visual analysis
        cout << ch;
    }
    cout <<endl <<endl << "File Information" <<endl;
    cout << "Number of lines : " <<lines<<endl;
    cout << "Number of words : " <<words<<endl;

}

/*
Program Output
----------------------------------------------

Enter filename to analyze : example2text.txt

File Contents : 

Lorem ipsum dolor sit amet, consectetur
adipiscing elit, sed do eiusmod tempor incididunt..

File Information
Number of lines : 2
Number of words : 13
(base) Paings-MacBook-Pro-2:lab_4 paingthetko$ 

*/