class Solution {
public:
    int findNthDigit(int n) {
        // int d = 9;
        // int y ;
        // if(n<9)
        // {
        //     return n;
        // }

        // int x = n - 9;
        // int m = x / 2;

        // d = d + m;

        // if(x % 2 == 0)
        // {
        //     y = d % 10;
        // }
        // else
        // {
        //     d = d+1;
        //     y = d / 10;
        // }

        // return y;
         long long digitLength = 1;     // 1-digit numbers at start
        long long count = 9;           // there are 9 numbers with 1 digit
        long long start = 1;           // 1-digit numbers start from 1

        // Step 1: Find the range where the nth digit is
        while (n > digitLength * count) {
            n -= digitLength * count;  // skip all digits in this group
            digitLength++;             // now we check longer digit numbers
            count *= 10;               // how many such numbers
            start *= 10;               // starting number of this group
        }

        // Step 2: Find the actual number which contains the nth digit
        long long number = start + (n - 1) / digitLength;

        // Step 3: Find the digit inside the number
        string numStr = to_string(number);
        return numStr[(n - 1) % digitLength] - '0';  // convert char to int
    }
};
