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
void bubble(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;  
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
   }
}

void bubble_desc(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++)
         if(array[j] > array[imin])
            imin = j;
         swap(array[imin], array[i]);
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
   bubble(arr, n);
   cout << "Selection Sort (Ascending) : ";
   print_array(arr, n);
   bubble_desc(arr, n);
   cout << "Selection Sort (Descending) : ";
   print_array(arr, n);
}