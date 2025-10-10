

#include <iostream>
using namespace std;

int main() {
    int n;              // number of inputs
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    int number, smallest;
    int count = 1;

    cout << "Enter number 1: ";
    cin >> number;
    smallest = number; // assume first number is smallest

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> number;

        if (number < smallest)
            smallest = number;

        count++;
    } while (count < n);

    cout << "\nThe smallest number is: " << smallest << endl;

    return 0;
}
