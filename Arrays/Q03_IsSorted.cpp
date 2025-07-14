// Problem: Check if Array is Sorted
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& nums) {
    if (nums.size() < 2) return true;

    int prev = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < prev) return false;
        prev = nums[i];
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    bool result = isSorted(nums);
    if (result) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
