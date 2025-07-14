// Problem: Union of Two Arrays
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    set<int> s;
    for (int x : nums1) s.insert(x);
    for (int x : nums2) s.insert(x);

    vector<int> result;
    for (int x : s) result.push_back(x);
    return result;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1), nums2(n2);
    for (int i = 0; i < n1; ++i) cin >> nums1[i];
    for (int i = 0; i < n2; ++i) cin >> nums2[i];

    vector<int> result = unionArray(nums1, nums2);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
