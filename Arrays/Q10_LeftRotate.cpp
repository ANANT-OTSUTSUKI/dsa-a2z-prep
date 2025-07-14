// Problem: Left Rotate Array by K
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotateByK(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    leftRotateByK(nums, k);
    for (int x : nums) cout << x << " ";
    cout << endl;
    return 0;
}
