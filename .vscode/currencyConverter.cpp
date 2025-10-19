#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, result;

    cout << "=== Currency Converter ===\n";
    cout << "1. USD to PKR\n";
    cout << "2. PKR to USD\n";
    cout << "3. EUR to PKR\n";
    cout << "4. PKR to EUR\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    switch (choice) {
        case 1: result = amount * 280; break;
        case 2: result = amount / 280; break;
        case 3: result = amount * 300; break;
        case 4: result = amount / 300; break;
        default:
            cout << "Invalid choice!";
            return 0;
    }

    cout << "Converted amount = " << result;
    return 0;
}
