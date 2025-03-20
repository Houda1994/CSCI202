#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array with multiple elements
    int* ptr = arr;  // Pointer to the first element

    // Use pointer arithmetic to access the second element (index 1)
    cout << "Second element: " << *(ptr + 1) << endl;  // Dereference with offset of 1

    return 0;
}
