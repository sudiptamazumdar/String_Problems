/*You are given a string s. Return true if the string is palindrome, otherwise false. A string is called palindrome if it reads the same forward and backward.*/

#include <bits/stdc++.h>
using namespace std;



string reverseString(const string& s) {
	string temp = "";
	for (int i = s.size() - 1; i >= 0; i--)
	{
		temp += s[i];
	}
	return temp;
}


bool palindromeCheck(string& s){
	string reversedString = reverseString(s);
	return reversedString == s;
}


int main()
{
  
    string s;
    cin >> s;
    cout << palindromeCheck(s);
    
    return 0;

}