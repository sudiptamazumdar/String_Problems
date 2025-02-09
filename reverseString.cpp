/*Given a string, the task is to reverse it. The string is represented by an array of characters s. Perform the reversal in place with O(1) extra memory*/

#include <iostream>
#include <vector>
using namespace std;

       
void reverseString(vector<char>& s) {
    // Reverse the string in place
    int left = 0, right = s.size() - 1;
    while (left < right) {
        swap(s[left], s[right]); // Swap characters
        left++;
        right--;
    }
}

int main()
{
    int s;
    cout << "Enter the size of string: ";
    cin >> s;
    vector<char> ans(s);
    for(int i = 0; i< s; i++)
    {
        cin >> ans[i];
    }
    reverseString(ans);
    for(auto ch : ans)
    {
        cout << ch << " ";
    }
    return 0;

}