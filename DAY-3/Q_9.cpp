/*You are given an integer array nums. Two players are playing a game with this array: player 1 and player 2.
 Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of 0. At each turn, the player takes one of the numbers from either end of the array (i.e., nums[0] or nums[nums.length - 1]) which reduces the size of the array by 1. The player adds the chosen number to their score. The game ends when there are no more elements in the array.
 Return true if Player 1 can win the game. If the scores of both players are equal, then player 1 is still the winner, and you should also return true. You may assume that both players are playing optimally.
*/
#include <iostream>
using namespace std;

bool canPlayer1Win(int nums[], int n) {
    int dp[n][n];

    for (int i = 0; i < n; i++) {
        dp[i][i] = nums[i];
    }

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
        }
    }

    return dp[0][n - 1] >= 0;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (canPlayer1Win(nums, n)) {
        cout << "Player 1 can win the game." << endl;
    } else {
        cout << "Player 1 cannot win the game." << endl;
    }

    return 0;
}
