#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;

        int actualSum = 0;
        for (int x : nums)
            actualSum += x;

        return expectedSum - actualSum;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {3, 0, 1};
    cout << "Input:    [3, 0, 1]" << endl;
    cout << "Output:   " << sol.missingNumber(nums1) << endl;
    cout << "Expected: 2" << endl;
    cout << endl;

    // Test case 2
    vector<int> nums2 = {0, 1};
    cout << "Input:    [0, 1]" << endl;
    cout << "Output:   " << sol.missingNumber(nums2) << endl;
    cout << "Expected: 2" << endl;
    cout << endl;

    // Test case 3
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Input:    [9, 6, 4, 2, 3, 5, 7, 0, 1]" << endl;
    cout << "Output:   " << sol.missingNumber(nums3) << endl;
    cout << "Expected: 8" << endl;
    cout << endl;

    // Test case 4 — missing 0
    vector<int> nums4 = {1, 2, 3};
    cout << "Input:    [1, 2, 3]" << endl;
    cout << "Output:   " << sol.missingNumber(nums4) << endl;
    cout << "Expected: 0" << endl;
    cout << endl;

    // Test case 5 — single element
    vector<int> nums5 = {0};
    cout << "Input:    [0]" << endl;
    cout << "Output:   " << sol.missingNumber(nums5) << endl;
    cout << "Expected: 1" << endl;

    return 0;
}