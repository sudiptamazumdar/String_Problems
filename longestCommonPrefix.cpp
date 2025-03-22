#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int n = arr.size();
        if (n == 0) return "";

        // Step 1: Sort the array lexicographically
        sort(arr.begin(), arr.end());

        // Step 2: Compare the first and last strings
        string first = arr[0];
        string last = arr[n - 1];
        int i = 0;

        // Step 3: Find the common prefix between the first and last string
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        // Return the common prefix
        return first.substr(0, i);
    }
};

int main() {
    vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geezer"};
    
    Solution sol;
    string result = sol.longestCommonPrefix(arr);

    // Output result
    if (result.empty()) {
        cout << "No common prefix found!" << endl;
    } else {
        cout << "Longest Common Prefix: " << result << endl;
    }

    return 0;
}
