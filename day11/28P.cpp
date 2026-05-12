#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();

        // window slides from 0 to h-n only
        for (int i = 0; i <= h - n; i++) {
            // check if window matches needle
            if (haystack.substr(i, n) == needle)
                return i;
        }

        return -1;
    }
};

int main() {
    Solution sol;

    // Test case 1
    cout << "Input:    haystack='sadbutsad'  needle='sad'" << endl;
    cout << "Output:   " << sol.strStr("sadbutsad", "sad") << endl;
    cout << "Expected: 0" << endl;
    cout << endl;

    // Test case 2
    cout << "Input:    haystack='leetcode'  needle='leeto'" << endl;
    cout << "Output:   " << sol.strStr("leetcode", "leeto") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;

    // Test case 3 — needle at end
    cout << "Input:    haystack='sadbutsad'  needle='sad' (second occurrence)" << endl;
    cout << "Output:   " << sol.strStr("sadbutsad", "sad") << endl;
    cout << "Expected: 0 (first occurrence only)" << endl;
    cout << endl;

    // Test case 4 — needle equals haystack
    cout << "Input:    haystack='sad'  needle='sad'" << endl;
    cout << "Output:   " << sol.strStr("sad", "sad") << endl;
    cout << "Expected: 0" << endl;
    cout << endl;

    // Test case 5 — needle longer than haystack
    cout << "Input:    haystack='a'  needle='aa'" << endl;
    cout << "Output:   " << sol.strStr("a", "aa") << endl;
    cout << "Expected: -1" << endl;
    cout << endl;

    // Test case 6 — single characters
    cout << "Input:    haystack='a'  needle='a'" << endl;
    cout << "Output:   " << sol.strStr("a", "a") << endl;
    cout << "Expected: 0" << endl;

    return 0;
}