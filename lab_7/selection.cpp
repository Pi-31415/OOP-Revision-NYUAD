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
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;  
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
         cout <<"Iteration "<< (i+1) <<" : ";
         print_array(array, size);
   }
}

void repl_desc(int *array, int size) {
   int i, j, imax;
   for(i = 0; i<size-1; i++) {
      imax = i;   
      for(j = i+1; j<size; j++)
         if(array[j] > array[imax])
            imax = j;
         swap(array[imax], array[i]);
         cout <<"Iteration "<< (i+1) <<" : ";
         print_array(array, size);
   }
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
   cout <<endl<< "Selection Sort Results (Ascending) : ";
   print_array(arr, n);
   repl_desc(arr, n);
   cout <<endl<< "Selection Sort Results (Descending) : ";
   print_array(arr, n);
}