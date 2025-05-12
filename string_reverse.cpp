#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

string reverseWords(const string & sentence)
{
    stringstream ss(sentence);
    string word;
    vector <string>words;

    while (ss >> word)
    {
        words.push_back(word);
    }
    string result = "";
    for (int i = words.size() - 1; i >= 0; i--)
    {
        result += words[i];
        if (i != 0) result += " ";
    }
    return result;

}

int main()
{
    string input = "this is a cool kid";
    string output = reverseWords(input);
    cout << output << endl; 
    return 0;
}