/*Alice is throwing n darts on a very large wall. You are given an array darts where darts[i] = [xi, yi] is the position of the ith dart that Alice threw on the wall.

Bob knows the positions of the n darts on the wall. He wants to place a dartboard of radius r on the wall so that the maximum number of darts that Alice throws lie on the dartboard.

Given the integer r, return the maximum number of darts that can lie on the dartboard.*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int maxDartsInDartboard(int darts[][2], int n, int r) {
    int maxDarts = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int x1 = darts[i][0], y1 = darts[i][1];
            int x2 = darts[j][0], y2 = darts[j][1];
            double centerX = (x1 + x2) / 2.0;
            double centerY = (y1 + y2) / 2.0;
            int count = 0;
            for (int k = 0; k < n; ++k) {
                int x = darts[k][0], y = darts[k][1];
                if (distance(centerX, centerY, x, y) <= r) {
                    count++;
                }
            }
            maxDarts = max(maxDarts, count);
        }
    }

    return maxDarts;
}

int main() {
    int n, r;
    cout << "Enter the number of darts: ";
    cin >> n;

    int darts[n][2];
    cout << "Enter the coordinates of the darts:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> darts[i][0] >> darts[i][1];
    }

    cout << "Enter the radius of the dartboard: ";
    cin >> r;

    int result = maxDartsInDartboard(darts, n, r);
    cout << "Maximum number of darts that can lie on the dartboard: " << result << endl;

    return 0;
}
