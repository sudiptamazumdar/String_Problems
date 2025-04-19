#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

string findUncommonChars(string s1, string s2) {
    set<char> set1(s1.begin(), s1.end());
    set<char> set2(s2.begin(), s2.end());
    string result = "";

    for (char c : set1) {
        if (set2.find(c) == set2.end()) {
            result += c;
        }
    }

    for (char c : set2) {
        if (set1.find(c) == set1.end()) {
            result += c;
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main() {
    string s1 = "geeksforgeeks";
    string s2 = "geeksquiz";

    string output = findUncommonChars(s1, s2);
    cout << "Output: " << output << endl;

    return 0;
}
