// Problem: Linear Search in Array
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int index = linearSearch(nums, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
