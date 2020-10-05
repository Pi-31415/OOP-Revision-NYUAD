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
    inputfile.open(filename, ios::in);

    if (inputfile.fail())
    {
        cerr << "File " << filename << " could not be opened." << endl;
        exit(1);
    }

    //initialize variables for counting
    int words(0), lines(0);
    //character to read the characters
    char ch;
    while (!inputfile.eof())
    {
        inputfile.get(ch);
        if(ch == '\n'){
            //count as line when there is a new line character
            lines++;
        }
        if(ch == '\n' || ch == '\t' || ch == 0x20 || ch == 0x0d){
            //count as word when there is a new line, tab or space or carriage return
            words++;
        }
        cout << ch;
    }

    cout << "Number of lines : " <<lines<<endl;

}