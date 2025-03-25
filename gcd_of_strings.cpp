#include <iostream>
#include <numeric> // For std::gcd
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) 
            return "";  
        
        int gcd_length = gcd(str1.size(), str2.size());
        return str1.substr(0, gcd_length);
    }
};

int main() {
    Solution sol;
    cout << sol.gcdOfStrings("ABCABC", "ABC") << endl;  
    cout << sol.gcdOfStrings("ABABAB", "ABAB") << endl; 
    cout << sol.gcdOfStrings("LEET", "CODE") << endl;   
}
