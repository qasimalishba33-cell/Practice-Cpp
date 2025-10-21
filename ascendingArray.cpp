#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 9, 1, 7};
    int n = 5;

    // Sorting in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {  // if element is greater than next one
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;  // swap them
            }
        }
    }

    cout << "Ascending order: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
