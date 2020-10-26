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
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;  
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
   }
}

void selectionSortReverse(int *array, int size) {
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
   int arr[n];           //create an array with given number of elements
   
   for(int i = 0; i<n; i++) {
      cout << "Enter elements # "<<(i+1)<<" :";
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   print_array(arr, n);
   selectionSortReverse(arr, n);
   cout << "Array after Sorting: ";
   print_array(arr, n);
}