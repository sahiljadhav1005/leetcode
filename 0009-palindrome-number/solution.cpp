class Solution {
public:
    bool isPalindrome(int x) {
        int p;
        int m = x;
        int reverse = 0;

        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
            p = x % 10;
             if (reverse > (INT_MAX) / 10) {
                return false; // Overflow would happen, so not a palindrome
            }
            reverse = reverse * 10 + p;
            x = x / 10;
        }

        return m  == reverse;
    }
};
