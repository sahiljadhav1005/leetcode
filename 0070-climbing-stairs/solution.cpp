class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 2;
        int temp = 0;

        if (n <= 2) 
        {
            return n;
        }
        
        for(int i = 3 ; i <= n ; i++)
        {
            temp = b;
            b = a + b;
            a = temp;
        }

        return b;
    }
};
