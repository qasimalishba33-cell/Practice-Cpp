#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    char grade = (marks >= 90) ? 'A' :
                 (marks >= 80) ? 'B' :
                 (marks >= 70) ? 'C' :
                 (marks >= 60) ? 'D' : 'F';

    switch (grade) {
        case 'A': cout << "Excellent! Grade A"; break;
        case 'B': cout << "Very Good! Grade B"; break;
        case 'C': cout << "Good! Grade C"; break;
        case 'D': cout << "Pass! Grade D"; break;
        case 'F': cout << "Fail! Better luck next time."; break;
    }

    return 0;
}
