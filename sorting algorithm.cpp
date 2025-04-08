#include <iostream>
 #include <vector>
 
 using namespace std;
 
 // Function to implement pointer-based bubble sort
 void pointerBubbleSort(vector<int>& arr) {
     int n = arr.size();
     int *ptr; // Pointer to traverse the array
 
     for (int i = 0; i < n - 1; i++) {
         for (int j = 0; j < n - i - 1; j++) {
             ptr = &arr[j]; // Point to the current element
 
             // Compare the current element with the next element
             if (*ptr > arr[j + 1]) {
                 // Swap elements using pointers
                 swap(*ptr, arr[j + 1]);
             }
         }
     }
 }
 
 int main() {
     vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
 
     cout << "Unsorted array: ";
     for (int i = 0; i < arr.size(); i++) {
         cout << arr[i] << " ";
     }
     cout << endl;
 
     pointerBubbleSort(arr);
 
     cout << "Sorted array: ";
     for (int i = 0; i < arr.size(); i++) {
         cout << arr[i] << " ";
     }
     cout << endl;
 
     return 0;
 }
