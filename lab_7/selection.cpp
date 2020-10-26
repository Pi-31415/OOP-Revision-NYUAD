#include<iostream>
using namespace std;

void swap(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void print_array(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void repl(int *array, int size) {
   /*
   Assign 1 to pass
   Repeat while pass less than num
	Assign 0 to largestPos
	Assign 1 to ix
   Repeat while ix less then or equal to num-pass
		   If arr[ix] larger than arr[largestPos]
			Assign ix to largestPos
		   Increment ix
	Assign arr[num-pass] to hold 
	Assign arr[largestPos] to arr[num-pass]
	Assign hold to arr[largestPos]		    
	Increment pass
   */
   
   
}

void repl_desc(int *array, int size) {

}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   
   for(int i = 0; i<n; i++) {
      cout << "Enter elements # "<<(i+1)<<" : ";
      cin >> arr[i];
   }
   cout << endl;
   cout << "Created Array : ";
   print_array(arr, n);
   repl(arr, n);
   cout << "Selection Sort (Ascending) : ";
   print_array(arr, n);
   repl_desc(arr, n);
   cout << "Selection Sort (Descending) : ";
   print_array(arr, n);
}