// Problem: Count Subarrays With Given XOR K
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSubarraysWithXOR(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int count = 0, xorpref = 0;

    for (int i = 0; i < nums.size(); i++) {
        xorpref ^= nums[i];

        if (xorpref == k) count++;

        if (freq.find(xorpref ^ k) != freq.end()) {
            count += freq[xorpref ^ k];
        }

        freq[xorpref]++;
    }

    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << countSubarraysWithXOR(nums, k) << endl;
    return 0;
}
