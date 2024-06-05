class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int ans=0;
        int dummy;
        while(y>0 && y< INT_MAX && y > INT_MIN){
            dummy=y%10;
            if (ans > (INT_MAX - dummy) / 10) {
                return false; // Overflow would occur
            }

            ans=ans*10+dummy;
            y=y/10;
        }
        if(ans==x){
            return true;
        }
        return false;
    }
};