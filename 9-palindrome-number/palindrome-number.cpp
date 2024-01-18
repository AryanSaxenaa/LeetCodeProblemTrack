class Solution {
public:
    bool isPalindrome(int x) {
        string pal = to_string(x);
        string rev = pal;  
        reverse(rev.begin(), rev.end());  
        return pal == rev;
    }
};