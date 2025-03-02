#include <iostream>
using namespace std;

int lastIndex(string s) {
    int lastIndex = -1;  
   
   for (int i = s.length() - 1; i >= 0; i--) {
       if (s[i] == '1') {
           lastIndex = i;
           break; 
       }
   }
   
   return lastIndex;
}

int main() {
    string s;
    cout << "Enter a number string: ";
    cin >> s;

    int result = lastIndex(s);
    
    cout << result;
}
