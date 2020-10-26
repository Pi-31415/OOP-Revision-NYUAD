#include <iostream>

using namespace std;

#define ROW_SIZE 2
#define COL_SIZE 4

int main()
{
    int grades[2][4] = {97, 98, 99, 100, 79, 80, 88, 100};
    int class_sums[ROW_SIZE] = {0};

    for (int i = 0; i < ROW_SIZE; i++)
    {
        for (int j = 0; j < COL_SIZE; j++)
        {
            class_sums[i] += grades[i][j];
            cout << class_sums[i] << endl;
        }
    }

    return 0;
}
