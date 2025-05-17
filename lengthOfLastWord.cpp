#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    int i = s.length() - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    string s1 = "Hello World";
    string s2 = "   fly me   to   the moon  ";
    
    cout << lengthOfLastWord(s1) << endl; // Output: 5
    cout << lengthOfLastWord(s2) << endl; // Output: 4

    return 0;
}
