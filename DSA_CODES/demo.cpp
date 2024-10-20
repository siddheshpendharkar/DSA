#include <iostream>
using namespace std;

int main() {
    // Predefined array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements

    bool isSorted = true;  // Flag to check if array is sorted

    // Loop to check if the array is sorted
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;  // If current element is less than previous, it's not sorted
            break;  // Exit the loop early
        }
    }

    // Output the result
    if (isSorted) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}