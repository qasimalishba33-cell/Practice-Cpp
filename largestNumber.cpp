#include <iostream>
using namespace std;

int main() {
    int n;              // number of inputs
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    int number, largest;
    int count = 1;

    cout << "Enter number 1: ";
    cin >> number;
    largest = number; // assume first number is largest

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> number;

        if (number > largest)
            largest = number;

        count++;
    } while (count < n);

    cout << "\nThe greatest number is: " << largest << endl;

    return 0;
}
