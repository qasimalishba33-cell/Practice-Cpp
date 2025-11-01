#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Determine layer
            int layer = min(min(i, j), min(n - 1 - i, n - 1 - j));

            // Calculate how many numbers were printed before this layer
            int totalPrev = 0;
            for (int k = 0; k < layer; k++) {
                int len = n - 2 * k;
                totalPrev += 4 * len - 4;
            }

            // Side boundaries of this layer
            int start = layer;
            int end = n - 1 - layer;

            int val;
            if (i == start) {                         // top row
                val = totalPrev + (j - start) + 1;
            } 
            else if (j == end) {                      // right column
                val = totalPrev + (end - start) + (i - start) + 1;
            } 
            else if (i == end) {                      // bottom row
                val = totalPrev + 2 * (end - start) + (end - j) + 1;
            } 
            else {                                    // left column
                val = totalPrev + 3 * (end - start) + (end - i) + 1;
            }

            cout << setw(4) << val;
        }
        cout << endl;
    }

    return 0;
}
