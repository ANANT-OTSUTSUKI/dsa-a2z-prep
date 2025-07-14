// Problem: Intersection of Two Arrays
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1;
    for (int x : nums1) s1.insert(x);

    set<int> result;
    for (int x : nums2) {
        if (s1.count(x)) result.insert(x);
    }

    vector<int> output;
    for (int x : result) output.push_back(x);
    return output;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1), nums2(n2);
    for (int i = 0; i < n1; ++i) cin >> nums1[i];
    for (int i = 0; i < n2; ++i) cin >> nums2[i];

    vector<int> result = intersectionArray(nums1, nums2);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
