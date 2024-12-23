//MEDIUM

/*You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:
 Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
Keep repeating the steps again, alternating left to right and right to left, until a single number remains.
Given the integer n, return the last number that remains in arr.
*/
#include <iostream>
using namespace std;

int lastRemaining(int n) {
    int start = 1, step = 1, remaining = n;
    bool leftToRight = true;

    while (remaining > 1) {
        if (leftToRight || remaining % 2 == 1) {
            start += step;
        }
        step *= 2;
        remaining /= 2;
        leftToRight = !leftToRight;
    }

    return start;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The last remaining number is: " << lastRemaining(n) << endl;
    return 0;
}
