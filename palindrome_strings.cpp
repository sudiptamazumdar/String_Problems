#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;  // mismatch found
        }
        left++;
        right--;
    }

    return true;  // no mismatches found
}

int main() {
    string s = "abba";

    if (isPalindrome(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
