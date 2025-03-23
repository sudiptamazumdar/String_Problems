#include <iostream>
#include <algorithm> // for std::gcd
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If concatenations are not equal, no common divisor exists
        if (str1 + str2 != str2 + str1)
            return "";

        // Find GCD of lengths
        int gcdLen = __gcd(str1.length(), str2.length());

        // Return the substring of length gcdLen from str1
        return str1.substr(0, gcdLen);
    }
};

int main() {
    Solution sol;
    cout << sol.gcdOfStrings("ABCABC", "ABC") << endl;  // Output: "ABC"
    cout << sol.gcdOfStrings("ABABAB", "ABAB") << endl;  // Output: "AB"
    cout << sol.gcdOfStrings("LEET", "CODE") << endl;   // Output: ""
    return 0;
}
