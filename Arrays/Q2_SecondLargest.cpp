
// ✅ Problem: Second Largest Element in Array
// 🌐 Source: A2Z DSA Sheet - Step 1
// 🔗 Link: https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/
// ✍️ Author: Anant Kumar

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargestElement(const vector<int>& nums) {
    if (nums.size() < 2) return -1;

    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest) {
            second = largest;
            largest = nums[i];
        } else if (nums[i] < largest && nums[i] > second) {
            second = nums[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
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

    int result = secondLargestElement(nums);
    cout << "Second largest element: " << result << endl;

    return 0;
}
