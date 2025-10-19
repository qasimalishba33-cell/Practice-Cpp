#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch (choice) {
        case 1:
            temp = (temp * 9/5) + 32;
            cout << "Temperature in Fahrenheit = " << temp;
            break;
        case 2:
            temp = (temp - 32) * 5/9;
            cout << "Temperature in Celsius = " << temp;
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
