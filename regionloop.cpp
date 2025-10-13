#include <iostream>
using namespace std;

int main() {
    int total1 = 0, total2 = 0, total3 = 0;  // totals for 3 regions
    int sale;

    // Loop for 3 regions
    for (int region = 1; region <= 3; region++) {
        cout << "Enter sales for Region " << region << " (enter 0 to stop):" << endl;

        // Inner loop to take sales until 0 is entered
        while (true) {
            cout << "Enter sale amount: ";
            cin >> sale;

            if (sale == 0)
                break;  // stop taking input for this region

            // Add sales to correct region total
            if (region == 1)
                total1 += sale;
            else if (region == 2)
                total2 += sale;
            else if (region == 3)
                total3 += sale;
        }

        cout << endl;
    }

    // Display total sales for each region
    cout << "Total Sales for Region 1: " << total1 << endl;
    cout << "Total Sales for Region 2: " << total2 << endl;
    cout << "Total Sales for Region 3: " << total3 << endl;

    return 0;
}
