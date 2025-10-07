#include<iostream>
#include<string>
using namespace std;

int main() {
    string word;
    string reverse = "";

    cout << "Enter any word: ";
    cin >> word;

    int i = word.length() - 1;  // start from the last character

    // reverse the string using while loop
    while (i >= 0) {
        reverse = reverse + word[i];
        i--;
    }

    if (word == reverse) {
        cout << "Word is palindrome";
    } else {
        cout << "Word is not palindrome";
    }

    return 0;
}
