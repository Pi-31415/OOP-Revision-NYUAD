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
    /*
   Assign 1 to pass
Repeat while pass less than num
	 Assign 0 to ix
	 Repeat while ix less than or equal to num-2
		   If arr[ix] greater than arr[ix+1]
			Assign arr[ix] to hold
			Assign arr[ix+1] to arr[ix]
			Assign hold to arr[ix+1]	
		   Increment ix 
	 Increment pass
   */

    int pass(1), ix(0), hold(0);
    pass = 1;
    while (pass < num)
    {
        ix = 0;
        while (ix <= num-2)
        {
            if (arr[ix] > arr[ix+1])
            {
                hold = arr[ix];
                arr[ix] = arr[ix+1];
                arr[ix+1] = hold;
                ix++;
            }
        }
        pass++;
    }
}

void bubble_desc(int *array, int size)
{
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