// Problem: Check If Two Arrays Are Equal
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool AreEqual(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() != nums2.size()) return false;

    unordered_map<int, int> freq1;
    unordered_map<int, int> freq2;

    for (int x : nums1) freq1[x]++;
    for (int x : nums2) freq2[x]++;

    return freq1 == freq2;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums1(n), nums2(n);
    for (int i = 0; i < n; ++i) cin >> nums1[i];
    for (int i = 0; i < n; ++i) cin >> nums2[i];

    cout << (AreEqual(nums1, nums2) ? "Equal" : "Not Equal") << endl;
    return 0;
}
