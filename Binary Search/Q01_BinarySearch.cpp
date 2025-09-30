
/**
 * File: Q01_BinarySearch.cpp
 * Author: Anant Otsutsuki
 * Description: Implementation of Binary Search in C++.
 *              Given a sorted array, this program finds the index
 *              of a target element using iterative binary search.
 *              Returns -1 if the element is not present.
 */

#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search
int search(vector<int> &nums, int target) {
    if(nums.empty()) return -1;

    int s = 0, e = nums.size() - 1;
    int mid;

    while(s <= e){
        mid = s + (e - s) / 2;

        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) s = mid + 1;
        else e = mid - 1;
    }

    return -1;
}

int main() {
    // Example test case
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int ans = search(nums, target);

    if(ans != -1) cout << "Target found at index: " << ans << endl;
    else cout << "Target not found." << endl;

    return 0;
}
