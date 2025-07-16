// Problem: Maximum Subarray Sum (Kadane's Algorithm)
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = 0, maxsum = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        maxsum = max(maxsum, sum);
        if (sum < 0) sum = 0;
    }
    return maxsum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    cout << maxSubArray(nums) << endl;
    return 0;
}
