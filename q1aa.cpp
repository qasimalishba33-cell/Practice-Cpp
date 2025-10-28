#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int target;
    cout << "Enter a number to check: ";
    cin >> target;
    
    // Lucas sequence starts with 2, 1
    int lucas1 = 2;
    int lucas2 = 1;
    int accumulated = 0;
    bool found = false;
    
    // Check if target is the first Lucas number
    if (target == 2) {
        accumulated = 2;
        found = true;
    }
    // Check if target is the second Lucas number
    else if (target == 1) {
        accumulated = 2; // Only 2 comes before 1 in Lucas
        accumulated = accumulated * 10 + 1; // Concatenate: 21
        found = true;
    }
    else {
        // Start accumulation - concatenate all Lucas numbers as digits
        accumulated = 2; // Start with first Lucas number
        accumulated = accumulated * 10 + 1; // Add second Lucas number: 21
        
        int next = lucas1 + lucas2;
        
        // Generate Lucas sequence using while loop
        while (next <= target) {
            // Concatenate next Lucas number to accumulated
            int temp = next;
            int multiplier = 1;
            while (temp > 0) {
                multiplier *= 10;
                temp /= 10;
            }
            accumulated = accumulated * multiplier + next;
            
            if (next == target) {
                found = true;
                break;
            }
            
            lucas1 = lucas2;
            lucas2 = next;
            next = lucas1 + lucas2;
        }
    }
    
    // Display result
    if (found) {
        cout << "Number: " << accumulated << endl;
        cout << "Pattern:" << endl;
        
        // Calculate diamond size using modulo of accumulated number
        int size = accumulated % target;
        if (size < 3) size = 5; // Make it 5 rows
        if (size % 2 == 0) size++; // Ensure odd number for symmetry
        
        // Top half of diamond (including middle)
        int row = 1;
        while (row <= size) {
            // Print leading spaces
            int spaces = size - row;
            int s = 0;
            while (s < spaces) {
                cout << " ";
                s++;
            }
            
            // Print digits from accumulated number
            int nums = 2 * row - 1;
            int n = 0;
            int digitPos = 0;
            
            // Convert accumulated to string-like representation for digit extraction
            int tempAcc = accumulated;
            int digitCount = 0;
            int temp = accumulated;
            while (temp > 0) {
                digitCount++;
                temp /= 10;
            }
            
            while (n < nums) {
                // Extract digit at position (digitPos % digitCount)
                int divisor = 1;
                int pos = digitCount - 1 - (digitPos % digitCount);
                int p = 0;
                while (p < pos) {
                    divisor *= 10;
                    p++;
                }
                int digit = (accumulated / divisor) % 10;
                cout << digit;
                digitPos++;
                n++;
            }
            cout << endl;
            row++;
        }
        
        // Bottom half of diamond
        row = size - 1;
        while (row >= 1) {
            // Print leading spaces
            int spaces = size - row;
            int s = 0;
            while (s < spaces) {
                cout << " ";
                s++;
            }
            
            // Print digits from accumulated number
            int nums = 2 * row - 1;
            int n = 0;
            int digitPos = 0;
            
            // Convert accumulated to string-like representation for digit extraction
            int digitCount = 0;
            int temp = accumulated;
            while (temp > 0) {
                digitCount++;
                temp /= 10;
            }
            
            while (n < nums) {
                // Extract digit at position (digitPos % digitCount)
                int divisor = 1;
                int pos = digitCount - 1 - (digitPos % digitCount);
                int p = 0;
                while (p < pos) {
                    divisor *= 10;
                    p++;
                }
                int digit = (accumulated / divisor) % 10;
                cout << digit;
                digitPos++;
                n++;
            }
            cout << endl;
            row--;
        }
    }
    else {
        cout << target << " is not in the Lucas Sequence." << endl;
    }
    
    return 0;
}