#include <iostream>
using namespace std;

int main() {
    int arr[] = {};  // Empty array
    int* ptr = arr;  // Pointer to the first element

    // Check if the array is empty and handle it
    if (sizeof(arr) / sizeof(arr[0]) == 0) {
        cout << "Array is empty" << endl;  // Output if the array is empty
    } else {
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
            cout << *(ptr + i) << " ";  // Dereferencing the pointer with offset
        }
        cout << endl;
    }

    return 0;
}
