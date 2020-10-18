#include <iostream>
#include <fstream>
#include <iomanip>
#define COLUMN_WIDTH 5
#define FILE_NAME "answers.txt"
#define MAX_QUESTIONS 100
using namespace std;

void get_answers(char answer[], int &max_index);
void print_answers(const char answer[], int max_index);
void load_answers(const char answer[], int max_index);

int main()
{
    char answers[MAX_QUESTIONS];
    int max_index(0); // this is the number of actual answers in file
    //sensor1 >> x; // read data from file and save in x
    cout.setf(ios::right);
    get_answers(answers, max_index);
    print_answers(answers, max_index);
    load_answers(answers, max_index);

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

void load_answers(const char answer[], int max_index)
{
    char ch; //character to represent each char in file read
    bool checkmode_on = false;
    //First open the file again
    ifstream file;
    int score(0);
    int index(0);
    int line_number(1);
    file.open(FILE_NAME);
    if (file.fail()) //detect file open failure
    {
        cerr << "Answer file could not be opened.";
        exit(1);
    }
    //First Ignore the first linie
    while (!file.eof())
    {
        file.get(ch);
        if (ch == '\n')
        {
            //print out the points at the right
            if (line_number >= 2 && !file.eof())
            {
                cout << setw(COLUMN_WIDTH+10) << score;
            }
            //reset score at each new line
            score = 0;
            index = 0;
            line_number++;
            checkmode_on = false;
        }
        if (line_number >= 2 && !file.eof())
        {
            //from line 2 onwards, it is student's data
            //turn on check mode if the answer sequence starts
            if (checkmode_on)
            {
                //add to score if check mode is on
                if (ch == answer[index])
                {
                    score++;
                    cout << setw(COLUMN_WIDTH) << "/";
                }
                else
                {
                    cout << setw(COLUMN_WIDTH) << "x";
                }
                index++;
            }
            else
            {
                //if not checking, display the student ID
                cout << ch;
            }
            if (ch == ' ')
            {
                checkmode_on = true;
            }
        }
    }
}

void print_answers(const char answer[], int max_index)
{
    //this prints the correct answers
    cout << "ANS: ";
    for (int i = 0; i < max_index; i++)
    {
        cout << setw(COLUMN_WIDTH) << answer[i];
    }
    cout << setw(COLUMN_WIDTH+10) << "Score";
    cout << endl;
}

/*



ANS:     A    B    C    D    A    B    C    D    A    B    C    D          Score

1231     /    /    x    x    /    /    x    x    x    x    x    /              5
1434     x    x    /    /    /    x    x    x    x    x    /    /              5

*/