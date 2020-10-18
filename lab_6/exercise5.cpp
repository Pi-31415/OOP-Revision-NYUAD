#include <iostream>
#include <fstream>

#define FILE_NAME "answers.txt"
#define MAX_QUESTIONS 100
using namespace std;

void get_answers(char answer[], int &max_index);
void print_answers(const char answer[], int max_index);

int main()
{
    char answers[MAX_QUESTIONS];
    int max_index(0); // this is the number of actual answers in file
    //sensor1 >> x; // read data from file and save in x

    get_answers(answers, max_index);
    print_answers(answers, max_index);

    return 0;
}

void get_answers(char answer[], int &max_index)
{
    char ch; //character to represent each char in file read
    ifstream file;
    file.open(FILE_NAME);
    if (file.fail()) //detect file open failure
    {
        cerr << "Answer file could not be opened.";
        exit(1);
    }
    //assume that there is space after the answers,
    //and first line contains the answers
    // i.e. 0000 ABCDABCDABCD
    while (!file.eof())
    {
        file.get(ch);
        if (ch == '\n')
        {
            //break the reading at the end of first line
            break;
        }
        if (ch != '0' && ch != ' ')
        {
            //if the character is not 0 and not space, it is the answer
            answer[max_index] = ch;
            max_index++;
        }
    }
}

void print_answers(const char answer[], int max_index)
{
    //this prints the correct answers
    cout << "Correct Answers : ";
    for  (int i=0;i< max_index;i++){
        cout << answer[i];
        if(i != max_index-1){
            cout << ",";
        }
    }
    cout <<endl;
}