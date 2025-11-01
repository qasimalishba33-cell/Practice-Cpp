#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    cout << "n=" << n << endl;
    
    // Upper half (including middle) - rows 0 to n-1
    for (int i = 0; i < n; i++) {
        // Print leading spaces to create diamond shape
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }
        
        cout << "1";
        
        // If not first row, print spaces and second number
        if (i > 0) {
            // Print spaces between 1 and the second number
            for (int s = 0; s < i * 2 - 1; s++) {
                cout << " ";
            }
            cout << (i + 1);
        }
        
        cout << endl;
    }
    
    // Lower half - rows n-2 down to 0
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces to create diamond shape
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }
        
        cout << "1";
        
        // If not last row, print spaces and second number
        if (i > 0) {
            // Print spaces between 1 and the second number
            for (int s = 0; s < i * 2 - 1; s++) {
                cout << " ";
            }
            cout << (i + 1);
        }
        
        cout << endl;
    }
    
    return 0;
}