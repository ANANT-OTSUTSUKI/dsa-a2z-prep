// Problem: Longest Subarray With Sum K (Positive Integers)
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int longestSubarraySumK(vector<int>& nums, int k) {
    int i = 0, j = 0, sum = 0, maxLen = 0;

    while (j < nums.size()) {
        sum += nums[j];

        while (sum > k) {
            sum -= nums[i];
            i++;
        }

        if (sum == k) {
            maxLen = max(maxLen, j - i + 1);
        }

        j++;
    }

    return maxLen;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << longestSubarraySumK(nums, k) << endl;
    return 0;
}
