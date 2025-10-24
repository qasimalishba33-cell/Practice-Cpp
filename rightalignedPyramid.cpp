#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number you want loop to continue: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int spaces = n - i;
        while (spaces > 0) {
            cout << " ";
            spaces--;
        }
        int j = 1;
        while (j <= i) {
            cout << "8";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
