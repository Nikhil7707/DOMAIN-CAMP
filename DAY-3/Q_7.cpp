/*You are working on building a text editor application. One of the features you're focusing on is a "word suggestion" system. The editor needs to identify the longest sequence of characters typed without repeating any letters to suggest potential words or phrases. To accomplish this, you must efficiently find the length of the longest substring of unique characters as the user types.

Description:
Write a function that takes a string as input and returns the length of the longest substring without repeating characters. A substring is a contiguous sequence of characters within the string.
*/

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int left = 0, maxLength = 0;
    
    for (int right = 0; right < s.length(); right++) {
        while (seen.find(s[right]) != seen.end()) {
            seen.erase(s[left]);
            left++;
        }
        seen.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }
    
    return maxLength;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    cout << "Length of longest substring without repeating characters: " 
         << lengthOfLongestSubstring(s) << endl;
    
    return 0;
}
