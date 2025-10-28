#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Enter the number of people (N): ";
    cin >> N;
    cout << "Enter the step (K): ";
    cin >> K;

    int alive = N;
    int currentPosition = 0; // position in the shrinking circle

    // We will store the current number of people logically
    // and calculate who gets eliminated each round.

    // Instead of using an array, we’ll shrink the circle count
    // and shift our position accordingly each time someone is removed.

    while (alive > 2) {
        // Every elimination moves (K-1) steps forward
        // and removes one person, so we adjust position
        currentPosition = (currentPosition + K - 1) % alive;
        alive--; // one person gone
    }

    // After the loop, only 2 remain
    cout << "The two last companions are at positions relative to original circle: ";

    // Survivor positions (relative to original)
    cout << ((currentPosition + 1) % N) + 1 << " and "
         << ((currentPosition + 2) % N) + 1 << endl;

    return 0;
}
