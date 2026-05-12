#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        
        // Step 1: reverse entire string
        reverse(s.begin(), s.end());
        
        int i = 0, j = 0;
        int wordStart = 0;
        
        // Step 2: reverse each word + compact spaces in one pass
        while (j < n) {
            while (j < n && s[j] == ' ') j++;   // skip spaces
            if (j == n) break;
            
            if (i != 0) s[i++] = ' ';            // add separator
            
            wordStart = i;
            while (j < n && s[j] != ' ')          // copy word
                s[i++] = s[j++];
            
            reverse(s.begin() + wordStart,         // fix word order
                    s.begin() + i);
        }
        
        s.resize(i);
        return s;
    }
};

int main(){
     Solution sol;

    // Test case 1
    string s1 = "the sky is blue";
    cout << "Input:  \"" << s1 << "\"" << endl;
    cout << "Output: \"" << sol.reverseWords(s1) << "\"" << endl;
    cout << "Expected: \"blue is sky the\"" << endl;
    cout << endl;

    // Test case 2
    string s2 = "  hello world  ";
    cout << "Input:  \"" << s2 << "\"" << endl;
    cout << "Output: \"" << sol.reverseWords(s2) << "\"" << endl;
    cout << "Expected: \"world hello\"" << endl;
    cout << endl;

    // Test case 3
    string s3 = "a good   example";
    cout << "Input:  \"" << s3 << "\"" << endl;
    cout << "Output: \"" << sol.reverseWords(s3) << "\"" << endl;
    cout << "Expected: \"example good a\"" << endl;
    cout << endl;

    // Test case 4 — single word
    string s4 = "hello";
    cout << "Input:  \"" << s4 << "\"" << endl;
    cout << "Output: \"" << sol.reverseWords(s4) << "\"" << endl;
    cout << "Expected: \"hello\"" << endl;
    cout << endl;

    // Test case 5 — all spaces
    string s5 = "   ";
    cout << "Input:  \"" << s5 << "\"" << endl;
    cout << "Output: \"" << sol.reverseWords(s5) << "\"" << endl;
    cout << "Expected: \"\"" << endl;

    return 0;