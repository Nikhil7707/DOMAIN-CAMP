//VERY EASY

/*Write a program that returns the value of N! (N factorial) using recursion.
Note that N! =- 1*2*...*N
Also, 0! = 1 and 1! = 1.
*/

#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
