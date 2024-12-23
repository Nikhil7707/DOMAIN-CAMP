//VERY HARD

/*Special binary strings are binary strings with the following two properties:
 The number of 0's is equal to the number of 1's.
Every prefix of the binary string has at least as many 1's as 0's.
You are given a special binary string s.
 A move consists of choosing two consecutive, non-empty, special substrings of s, and swapping them. Two strings are consecutive if the last character of the first string is exactly one index before the first character of the second string.
 Return the lexicographically largest resulting string possible after applying the mentioned operations on the string.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string makeLargestSpecial(string s) {
    vector<string> specials;
    int count = 0, start = 0;

    for (int i = 0; i < s.size(); i++) {
        count += (s[i] == '1') ? 1 : -1;
        if (count == 0) {
            string special = "1" + makeLargestSpecial(s.substr(start + 1, i - start - 1)) + "0";
            specials.push_back(special);
            start = i + 1;
        }
    }

    sort(specials.rbegin(), specials.rend()); // Sort in reverse order for lexicographical largest
    string result = "";
    for (const string& special : specials) {
        result += special;
    }

    return result;
}

int main() {
    string s;
    cout << "Enter the special binary string: ";
    cin >> s;
    cout << "The lexicographically largest string is: " << makeLargestSpecial(s) << endl;
    return 0;
}
