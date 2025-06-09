class Solution {
public:
    bool isPalindrome(int x) {
        // int reverse = 0;
        // int temp = x;

        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        // while(temp != 0)
        // {
        //     int digit = temp % 10;
        //     if (reverse > (INT_MAX - digit) / 10)
        //     {
        //         return false;  // avoid overflow
        //     }
        //     reverse = reverse * 10 + digit;
        //     temp = temp / 10;
        // }

        // return x == reverse;

        int reverse = 0;

        while(x > reverse)
        {
            reverse = reverse * 10 + x % 10;
            x = x / 10;
        } 

        return x == reverse || x == reverse / 10;
    }
};
