/*Given a string s, representing a large integer, the task is to return the largest-valued odd integer (as a string) that is a substring of the given string s.

The number returned should not have leading zero's. But the given input string may have leading zero.


Examples:
Input : s = "5347"

Output : "5347"*/

#include <iostream>
#include <string>

using namespace std;

string largestOddSubstring(string s) {
    int lastOddIndex = -1;

    // Find the last odd digit in the string
    for (int i = s.length() - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2 == 1) { // Check if the digit is odd
            lastOddIndex = i;
            break; // Stop at the first (rightmost) odd digit
        }
    }

    // If no odd digit is found, return an empty string
    if (lastOddIndex == -1) return "";

    // Get the substring up to the last odd digit
    string result = s.substr(0, lastOddIndex + 1);

    // Remove leading zeros
    int startIndex = 0;
    while (startIndex < result.size() && result[startIndex] == '0') {
        startIndex++;
    }

    // If the whole string was zeros, return "0", otherwise return the cleaned result
    return (startIndex == result.size()) ? "0" : result.substr(startIndex);
}

int main() {
    string s;
    cout << "Enter a number string: ";
    cin >> s;

    string result = largestOddSubstring(s);
    
    if (!result.empty()) {
        cout << "Largest odd integer substring: " << result << endl;
    } else {
        cout << "No odd integer found." << endl;
    }

    return 0;
}
