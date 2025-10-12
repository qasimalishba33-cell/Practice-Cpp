#include <iostream>
using namespace std;

int main() {
    signed int a = -10;     // signed integer can store negative values
    unsigned int b = -10;   // unsigned integer cannot store negative values

    cout << "Signed integer value (a): " << a << endl;
    cout << "Unsigned integer value (b): " << b << endl;

    cout << "\nNow let's see their positive equivalents:\n";

    a = 10;
    b = 10;

    cout << "Signed integer value (a): " << a << endl;
    cout << "Unsigned integer value (b): " << b << endl;

    return 0;
}