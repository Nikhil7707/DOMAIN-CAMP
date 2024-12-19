//VERY EASY

//Print all odd numbers between 1 and n, inclusive

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
