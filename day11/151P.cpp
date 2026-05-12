#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
    public:
     string reverseWords(string s){
        int n = s.size();
        int i = 0;
        string ans = "";
        while (i<n)
        {
            string temp = "";
            while (i<n && s[i] == ' ' )
            i++;
            while (i<n && s[i] != ' ' ){
            temp += s[i];
            i++;
            }
            if (temp.size()> 0)
            {
                if (ans.size() == 0)
                    ans = temp;
                
                else
                    ans = temp + " " + ans;
                
            }
            
        
            
        }
        
        return ans;


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
}
