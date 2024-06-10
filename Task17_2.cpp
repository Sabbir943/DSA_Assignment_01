#include <iostream>
using namespace std;

int main() {
    // Define an array of integers
    int arr[] = {1, 2, 3, 4, 5};
   // Create a pointer to the first element of the array
    int *ptr = arr;
   // Get the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
   // Use the pointer to print all elements of the array
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
