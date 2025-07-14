// Problem: Remove Duplicates from Sorted Array
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int id = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[id] != nums[i]) {
            id++;
            nums[id] = nums[i];
        }
    }
    return id + 1;
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

    int newLength = removeDuplicates(nums);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
