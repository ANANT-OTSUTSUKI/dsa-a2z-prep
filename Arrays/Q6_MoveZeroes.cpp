// Problem: Move All Zeros to the End
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int ind = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[ind] = nums[i];
            ind++;
        }
    }
    for (int i = ind; i < nums.size(); i++) {
        nums[i] = 0;
    }
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

    moveZeroes(nums);

    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
