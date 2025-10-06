#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = n; i>=1; --i) {
        // Inner loop for numbers in each row
        for (int j = i; j>=1; --j) {
            cout << "*";   // print numbers from 1 to i
        }
        cout << endl;    // move to next line after each row
    }

    return 0;
}
