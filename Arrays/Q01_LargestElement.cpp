
// Problem: Largest Element in Array
// Source: A2Z DSA Sheet - Step 1
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

int largestElement(const vector<int>& nums) {
    if (nums.empty()) return -1; // handle edge case
    int maxNum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > maxNum) {
            maxNum = nums[i];
        }
    }
    return maxNum;
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

    int result = largestElement(nums);
    cout << "Largest element: " << result << endl;

    return 0;
}
