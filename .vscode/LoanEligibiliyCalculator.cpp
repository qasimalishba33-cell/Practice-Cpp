#include <iostream>
using namespace std;

int main() {
    int age, salary;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your monthly salary: ";
    cin >> salary;

    string result = (age >= 21 && salary >= 30000) ? "Eligible for loan" :
                    (age >= 21 && salary < 30000) ? "Low salary, not eligible" :
                    "Too young to apply";

    cout << result;
    return 0;
}
