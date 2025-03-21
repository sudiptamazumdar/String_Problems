#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        int n1 = word1.size(), n2 = word2.size();
        
        // Add characters alternately
        while (i < n1 && j < n2) {
            merged += word1[i++];
            merged += word2[j++];
        }

        // Append remaining characters from word1
        while (i < n1) {
            merged += word1[i++];
        }

        // Append remaining characters from word2
        while (j < n2) {
            merged += word2[j++];
        }

        return merged;
    }
};

int main() {
    string word1, word2;
    
    // Taking input
    cout << "Enter first string: ";
    cin >> word1;
    cout << "Enter second string: ";
    cin >> word2;

    Solution sol;
    string result = sol.mergeAlternately(word1, word2);

    // Printing the merged result
    cout << "Merged String: " << result << endl;

    return 0;
}
