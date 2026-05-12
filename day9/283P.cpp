#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // slow pointer — position for next non-zero

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]); // bring non-zero to front
                i++;
            }
        }
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums1);
    cout << "Output 1: ";
    for (int x : nums1) cout << x << " ";
    cout << "\nExpected: 1 3 12 0 0\n\n";

    // Test case 2
    vector<int> nums2 = {0};
    sol.moveZeroes(nums2);
    cout << "Output 2: ";
    for (int x : nums2) cout << x << " ";
    cout << "\nExpected: 0\n\n";

    // Test case 3 — no zeroes
    vector<int> nums3 = {1, 2, 3};
    sol.moveZeroes(nums3);
    cout << "Output 3: ";
    for (int x : nums3) cout << x << " ";
    cout << "\nExpected: 1 2 3\n\n";

    // Test case 4 — all zeroes
    vector<int> nums4 = {0, 0, 0};
    sol.moveZeroes(nums4);
    cout << "Output 4: ";
    for (int x : nums4) cout << x << " ";
    cout << "\nExpected: 0 0 0\n";

    return 0;
}