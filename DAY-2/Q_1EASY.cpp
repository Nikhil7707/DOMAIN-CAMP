// EASY
/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.*/
#include <iostream>
#include <algorithm>
using namespace std;

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;
    int k = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int k = removeDuplicates(nums, n);
    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
