// Problem: Print Maximum Subarray (Kadane's Subarray)
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSubArrayPrint(vector<int>& nums) {
    int sum = 0, maxsum = nums[0];
    int l = 0, r = 0, start = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum > maxsum) {
            maxsum = sum;
            l = start;
            r = i;
        }

        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }
    }

    vector<int> result;
    for (int i = l; i <= r; ++i) {
        result.push_back(nums[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    vector<int> result = maxSubArrayPrint(nums);
    for (int num : result) cout << num << " ";
    cout << endl;
    return 0;
}
