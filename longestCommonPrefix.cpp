/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector <string> &str)
{
    if (str.empty())
        return "";

    string prefix = str[0];
    for (int i = 1; i < str.size(); i++)
    {
        while (str[i].find(prefix) != 0)
        {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty())
                return "";
        }
    }
    return prefix;
}
int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}