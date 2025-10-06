#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows for half diamond: ";
    cin >> n;

    // 🔼 Upper half of diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = i; space < n; space++) {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "*";
        }

        cout << endl;
    }

    // 🔽 Lower half of diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int space = n; space > i; space--) {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
