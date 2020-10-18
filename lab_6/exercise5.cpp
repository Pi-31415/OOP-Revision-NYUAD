#include <iostream>
#include <fstream>

#define FILE_NAME "answers.txt"
#define MAX_QUESTIONS 100
using namespace std;

void get_answers(char answer[]);

int main()
{
    char answers[MAX_QUESTIONS];

    //sensor1 >> x; // read data from file and save in x

    get_answers(answers);

    return 0;
}

void get_answers(char answer[])
{
    char ch; //character to represent each char in file read
    ifstream file;
    file.open(FILE_NAME);
    if (file.fail()) //detect file open failure
    {
        cerr << "Answer file could not be opened.";
        exit(1);
    }
    while (!file.eof())
    {
        infile.get(ch);
        cout << ch;
    }
}