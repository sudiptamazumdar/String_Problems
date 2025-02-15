/*Given a string s, the task is to change the complete string to uppercase or lowercase depending on the case of the first character.*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    string modify(string s) {
        if (isupper(s[0])) {
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        } else {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        }
        return s;
    }
};

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.modify(s) << endl;
    }

    return 0;
}
