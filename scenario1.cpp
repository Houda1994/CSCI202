#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array with multiple elements
    int* ptr = arr;  // Pointer to the first element

    // Using pointer arithmetic to traverse the array
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // Dereferencing the pointer with offset
    }
    cout << endl;

    return 0;
}
