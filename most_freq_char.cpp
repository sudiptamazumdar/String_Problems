#include <iostream>
#include <string>
#include <vector>
using namespace std;

char getMaxOccurringChar(string s) {
    vector<int> freq(26, 0);  // Frequency array for a-z

    // Count frequency of each character
    for (char c : s) {
        freq[c - 'a']++;
    }

    int maxFreq = 0;
    char result = 'z' + 1;  // Initialize with a char greater than any lowercase

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = 'a' + i;
        } else if (freq[i] == maxFreq && ('a' + i) < result) {
            result = 'a' + i;  // Choose lexicographically smaller if tie
        }
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    char result = getMaxOccurringChar(s);
    cout << "Maximum occurring character: " << result << endl;

    return 0;
}
