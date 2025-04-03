/*Find the first occurrence of the string pat in the string txt. The function returns an integer denoting the first occurrence of the string pat in txt (0-based indexing).

Note: You are not allowed to use the inbuilt function. If there is no occurrence then return -1.

Examples :

Input: txt = "GeeksForGeeks", pat = "Fr"
Output: -1
Explanation: Fr is not present in the string GeeksForGeeks as substring.
Input: txt = "GeeksForGeeks", pat = "For"
Output: 5
Explanation: For is present as substring in GeeksForGeeks from index 5 (0 based indexing).*/

#include <iostream>
using namespace std;

int findSubstring(string txt, string pat) {
    int n = txt.size();
    int m = pat.size();

   
    for (int i = 0; i <= n - m; i++) {
        int j;
       
        for (j = 0; j < m; j++) {
            if (txt[i + j] != pat[j]) {
                break;  
            }
        }
        if (j == m) return i;
    }
    return -1;
}

int main() {
    string txt = "GeeksForGeeks";
    string pat = "For";

    int index = findSubstring(txt, pat);
    cout << "First occurrence at index: " << index << endl;

    return 0;
}
