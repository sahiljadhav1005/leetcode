class Solution {
public:
    int fib(int n) {
        int r = 0,x = 0,y = 1;

        if(n <= 1)
        {
            return n;
        }
        else
        {
            n = n - 1;
            while(n > 0)
            {
                r = x+y;
                x = y;
                y = r;
                n--;
            }
            return r;
        }

        // if (n <= 1) return n;
        // return fib(n - 1) + fib(n - 2);
    }
};
