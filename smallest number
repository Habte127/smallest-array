#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int findSmallestNumber(const vector<int>& arr) {
    if (arr.empty()) {
        cerr << "Error: Array is empty!" << endl;
        return INT_MIN; // Indicate error
    }

    int smallest = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    int smallest = findSmallestNumber(arr);
    
    if (smallest != INT_MIN) { // Check for error
        cout << "The smallest number in the array is: " << smallest << endl;
    }
    return 0;
}
