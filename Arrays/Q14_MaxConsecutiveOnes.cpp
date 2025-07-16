// Problem: Find Maximum Consecutive 1s
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int max1s = 0, count = 0;
    for (int x : nums) {
        if (x == 1) {
            count++;
            max1s = max(max1s, count);
        } else {
            count = 0;
        }
    }
    return max1s;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
