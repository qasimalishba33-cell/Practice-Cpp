#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Even or Odd\n";
        cout << "2. Positive or Negative\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter number: ";
                cin >> n;
                cout << ((n % 2 == 0) ? "Even" : "Odd");
                break;
            }
            case 2: {
                int n;
                cout << "Enter number: ";
                cin >> n;
                cout << ((n >= 0) ? "Positive" : "Negative");
                break;
            }
            case 3:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!";
        }

    } while (choice != 3);

    return 0;
}
