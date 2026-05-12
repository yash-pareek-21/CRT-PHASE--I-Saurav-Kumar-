#include <iostream>
#include <cctype>
using namespace std;

class Solution {
    public:
    bool isPalindrome(string s){
        int start = 0;
        int end = s.length() - 1;
    

    while(start < end){
        while(!isalnum(s[start]) && start < end){
        start ++;
        }
        while(!isalnum(s[end]) && start < end){
        end --;
        }

        if(tolower(s[start]) != tolower(s[end])){
            return false;
        }
        start ++;
        end --;
    }
    return true;
}
};

int main() {
    Solution obj;

    string s = "A man, a plan, a canal: Panama";

    if (obj.isPalindrome(s)) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}