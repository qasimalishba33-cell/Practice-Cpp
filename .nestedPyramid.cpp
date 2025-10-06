#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i<=n; i++) {
        // Inner loop for numbers in each row
        for (int space = i; space<n; space++) {
            cout << " ";   
        }
        for (int star = 1; star<=(2*i-1); star++){
            cout<<"*";
        }
        cout << endl;    // move to next line after each row
    }

    return 0;
}
