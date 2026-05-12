#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // safe — avoids overflow

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;  // discard left half
            else
                high = mid - 1; // discard right half
        }

        return -1; // target not found
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    cout << "Input:    [-1,0,3,5,9,12]  target=9" << endl;
    cout << "Output:   " << sol.search(nums1, 9) << endl;
    cout << "Expected: 4" << endl;
    cout << endl;

    // Test case 2
    vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
    cout << "Input:    [-1,0,3,5,9,12]  target=2" << endl;
    cout << "Output:   " << sol.search(nums2, 2) << endl;
    cout << "Expected: -1" << endl;
    cout << endl;

    // Test case 3 — target is first element
    vector<int> nums3 = {-1, 0, 3, 5, 9, 12};
    cout << "Input:    [-1,0,3,5,9,12]  target=-1" << endl;
    cout << "Output:   " << sol.search(nums3, -1) << endl;
    cout << "Expected: 0" << endl;
    cout << endl;

    // Test case 4 — target is last element
    vector<int> nums4 = {-1, 0, 3, 5, 9, 12};
    cout << "Input:    [-1,0,3,5,9,12]  target=12" << endl;
    cout << "Output:   " << sol.search(nums4, 12) << endl;
    cout << "Expected: 5" << endl;
    cout << endl;

    // Test case 5 — single element found
    vector<int> nums5 = {5};
    cout << "Input:    [5]  target=5" << endl;
    cout << "Output:   " << sol.search(nums5, 5) << endl;
    cout << "Expected: 0" << endl;
    cout << endl;

    // Test case 6 — single element not found
    vector<int> nums6 = {5};
    cout << "Input:    [5]  target=3" << endl;
    cout << "Output:   " << sol.search(nums6, 3) << endl;
    cout << "Expected: -1" << endl;

    return 0;
}