// Problem: Left Rotate Array by One Place
// Source: A2Z DSA Sheet
// Author: Anant Kumar

#include <iostream>
#include <vector>
using namespace std;

void rotateArrayByOne(vector<int>& nums) {
    int x = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        nums[i - 1] = nums[i];
    }
    nums[nums.size() - 1] = x;
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

    rotateArrayByOne(nums);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
