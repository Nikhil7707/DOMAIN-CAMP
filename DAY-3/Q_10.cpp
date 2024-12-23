/*There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei.
You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1.
*/
#include <iostream>
#include <queue>
#include <climits>

using namespace std;

#define MAX_CITIES 100

struct Flight {
    int from;
    int to;
    int price;
};

int findCheapestPrice(int n, Flight flights[], int m, int src, int dst, int k) {
    int dp[MAX_CITIES][k + 2];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k + 1; j++) {
            dp[i][j] = INT_MAX;
        }
    }
    
    dp[src][0] = 0;

    for (int stops = 1; stops <= k + 1; stops++) {
        for (int i = 0; i < m; i++) {
            int from = flights[i].from;
            int to = flights[i].to;
            int price = flights[i].price;

            if (dp[from][stops - 1] != INT_MAX) {
                dp[to][stops] = min(dp[to][stops], dp[from][stops - 1] + price);
            }
        }
    }

    int result = INT_MAX;
    for (int stops = 0; stops <= k + 1; stops++) {
        result = min(result, dp[dst][stops]);
    }
    
    return (result == INT_MAX) ? -1 : result;
}

int main() {
    int n = 4;
    int m = 5;

    Flight flights[] = {
        {0, 1, 100},
        {1, 2, 100},
        {2, 0, 100},
        {1, 3, 600},
        {2, 3, 200}
    };

    cout << "Flight details (from, to, price):\n";
    for (int i = 0; i < m; i++) {
        cout << flights[i].from << " -> " << flights[i].to << " : " << flights[i].price << " price\n";
    }

    int src, dst, k;
    cout << "Enter the source city: ";
    cin >> src;
    cout << "Enter the destination city: ";
    cin >> dst;
    cout << "Enter the maximum number of stops: ";
    cin >> k;

    int result = findCheapestPrice(n, flights, m, src, dst, k);
    if (result == -1) {
        cout << "No valid route found.\n";
    } else {
        cout << "The cheapest price is: " << result << endl;
    }

    return 0;
}
