
/**
 * File: Q02_LowerBound.cpp
 * Author: Anant Otsutsuki
 * Description: Implementation of Lower Bound in C++.
 *              Given a sorted array, this program finds the index
 *              of the first element that is greater than or equal to the target.
 *              Returns -1 if no such element exists.
 */

#include <bits/stdc++.h>
using namespace std;

// Function to perform lower bound search
int lowerBound(vector<int>& nums, int x) {
    int s = 0, e = nums.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] >= x) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    // Example test case
    vector<int> nums = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;

    int ans = lowerBound(nums, target);

    if(ans != -1)
        cout << "Lower bound of " << target << " is at index: " << ans << endl;
    else
        cout << "No element greater than or equal to " << target << " found." << endl;

    return 0;
}
