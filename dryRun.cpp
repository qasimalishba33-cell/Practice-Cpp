#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of rows for the diamond (half): ";
    cin >> N;

    cout << "\nNumber Diamond Pattern:\n\n";

    // Upper half
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int s = i; s < N; s++) {
            cout << " ";
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = N - 1; i >= 1; i--) {
        // Print spaces
        for (int s = N; s > i; s--) {
            cout << " ";
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
