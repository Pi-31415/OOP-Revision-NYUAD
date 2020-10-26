#include <iostream>

using namespace std;

#define ROW_SIZE 2
#define COL_SIZE 4

int main()
{
    int grades[2][4] = {{97, 98, 99, 100}, {79, 80, 88, 100}};
    int class_sums[ROW_SIZE] = {0};

    for (int i = 0; i < ROW_SIZE; i++)
    {
        cout << "For Class " << (i+1) << ", the sum is "<<endl;
        for (int j = 0; j < COL_SIZE; j++)
        {
            cout << class_sums[i] << " + " << grades[i][j] << " = ";
            class_sums[i] += grades[i][j];
            cout << class_sums[i] << endl;
        }
        cout << endl;
    }

    return 0;
}

/*
Output of program

For Class 1, the sum is 
0 + 97 = 97
97 + 98 = 195
195 + 99 = 294
294 + 100 = 394

For Class 2, the sum is 
0 + 79 = 79
79 + 80 = 159
159 + 88 = 247
247 + 100 = 347
*/
