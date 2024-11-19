#include <iostream>
#include <string>
using namespace std;

bool isValidExpression(char digit1, char comparison, char digit2) {
    if (comparison == '<') return digit1 < digit2;
    if (comparison == '>') return digit1 > digit2;
    if (comparison == '=') return digit1 == digit2;
    return false;
}

string fixExpression(string s) {
    char digit1 = s[0];
    char comparison = s[1];
    char digit2 = s[2];

    if (isValidExpression(digit1, comparison, digit2)) {
        return s;
    }

    // Try to fix the expression with minimal changes
    if (comparison == '<') {
        if (digit1 >= digit2) {
            // Increase digit2 to make the condition true
            digit2 = digit1 + 1;
        }
    } else if (comparison == '>') {
        if (digit1 <= digit2) {
            // Decrease digit2 to make the condition true
            digit2 = digit1 - 1;
        }
    } else if (comparison == '=') {
        if (digit1 != digit2) {
            // Make both digits equal
            digit2 = digit1;
        }
    }

    s[2] = digit2; // Update the last character in the string
    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << fixExpression(s) << endl;
    }

    return 0;
}
