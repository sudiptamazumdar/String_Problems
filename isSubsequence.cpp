#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int n1 = s.length(), n2 = t.length();

        while (j < n2) {
            if (i < n1 && s[i] == t[j]) {
                i++;  
            }
            j++;  
        }
        
        return i == n1; 
    }
};

int main() {
    Solution sol;
    cout << sol.isSubsequence("abc", "ahbgdc") << endl;  
    cout << sol.isSubsequence("axc", "ahbgdc") << endl;  
    return 0;
}
