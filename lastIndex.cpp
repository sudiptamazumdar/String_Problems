int lastIndex(string s) {
    int lastIndex = -1;  
   
   for (int i = s.length() - 1; i >= 0; i--) {
       if (s[i] == '1') {
           lastIndex = i;
           break; 
       }
   }
   
   return lastIndex;

   int main() {
    string s;
    cout << "Enter a number string: ";
    cin >> s;

    string result = lastIndex(s);
    
    if (!result.empty()) {
        cout << "Largest odd integer substring: " << result << endl;
    } else {
        cout << "No odd integer found." << endl;
    }

    return 0;
}
