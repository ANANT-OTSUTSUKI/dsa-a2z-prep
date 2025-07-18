// Problem: Find the Element That Appears Once (XOR)
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int num : nums) {
        ans ^= num;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << singleNumber(nums) << endl;
    return 0;
}
