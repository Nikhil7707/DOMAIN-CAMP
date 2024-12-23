//HARD

/*The set [1, 2, 3, ..., n] contains a total of n! unique permutations.
 By listing and labeling all of the permutations in order, we get the following sequence for n = 3:
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getPermutation(int n, int k) {
    vector<int> numbers;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        numbers.push_back(i);
        fact *= i;
    }
    
    k--; // Convert to 0-based index
    string result = "";
    
    for (int i = 0; i < n; i++) {
        fact /= (n - i);
        int index = k / fact;
        result += to_string(numbers[index]);
        numbers.erase(numbers.begin() + index);
        k %= fact;
    }
    
    return result;
}

int main() {
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    cout << "The " << k << "th permutation is: " << getPermutation(n, k) << endl;
    return 0;
}
