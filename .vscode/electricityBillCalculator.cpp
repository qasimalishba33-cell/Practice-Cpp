#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;
    char category;

    cout << "Enter units consumed: ";
    cin >> units;
    cout << "Enter category (R = Residential, C = Commercial): ";
    cin >> category;

    switch (category) {
        case 'R':
            bill = (units <= 100) ? units * 5 :
                   (units <= 300) ? 100*5 + (units-100)*7 :
                                    100*5 + 200*7 + (units-300)*10;
            break;

        case 'C':
            bill = (units <= 100) ? units * 8 :
                   (units <= 300) ? 100*8 + (units-100)*10 :
                                    100*8 + 200*10 + (units-300)*12;
            break;

        default:
            cout << "Invalid category!";
            return 0;
    }

    cout << "Total Bill = Rs. " << bill;
    return 0;
}
