class Solution {
public:
    int tribonacci(int n) {
        int r = 0, x = 0 , y = 1 , z =1;
        if(n <= 1)
        {
            return n;
        }
        else if(n == 2)
        {
            return 1;
        }
        else
        {
            n = n - 2;
            while(n > 0)
            {
                r = x+y+z;
                x = y;
                y = z;
                z = r;
                n--;
            }
            return r;
        }
    }
};
