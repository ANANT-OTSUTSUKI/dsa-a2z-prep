// Problem: Right Rotate Array by K
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightRotateByK(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    rightRotateByK(nums, k);
    for (int x : nums) cout << x << " ";
    cout << endl;
    return 0;
}
