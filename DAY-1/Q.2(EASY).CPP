//EASY

//Reverse the digits of a given number n. For example, if the input number is 12345, the output should be 54321

#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}
