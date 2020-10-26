#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void bubble(int *arr, int num)
{
    int pass(1), ix(0), hold(0);
    pass = 1;
    while (pass < num)
    {
        ix = 0;
        while (ix <= num - 2)
        {
            if (arr[ix] > arr[ix + 1])
            {
                cout << "Swap " << arr[ix] << " and " << arr[ix + 1] << "." << endl;
                swap(arr[ix], arr[ix + 1]);
                print_array(arr, num);
            }
            ix++;
        }
        pass++;
    }
}

void bubble_desc(int *arr, int num)
{
    int pass(1), ix(0), hold(0);
    pass = 1;
    while (pass < num)
    {
        ix = 0;
        while (ix <= num - 2)
        {
            if (arr[ix] < arr[ix + 1])
            {
                cout << "Swap " << arr[ix] << " and " << arr[ix + 1] << "." << endl;
                swap(arr[ix], arr[ix + 1]);
                print_array(arr, num);
            }
            ix++;
        }
        pass++;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements # " << (i + 1) << " : ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "Created Array : ";
    print_array(arr, n);
    bubble(arr, n);
    cout << endl
         << "Bubble Sort Results (Ascending) : ";
    print_array(arr, n);
    bubble_desc(arr, n);
    cout << endl
         << "Bubble Sort Results (Descending) : ";
    print_array(arr, n);
}