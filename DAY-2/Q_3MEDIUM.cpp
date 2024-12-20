//MEDIUM 2
/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int maxArea(int height[], int n) {
    int left = 0, right = n - 1;
    int maxWater = 0;
    
    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;
        
        maxWater = max(maxWater, area);
        
        // Move the pointer corresponding to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxWater;
}

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    
    int height[n];
    cout << "Enter the heights of the lines: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int result = maxArea(height, n);
    cout << "Maximum water that can be contained: " << result << endl;
    
    return 0;
}
