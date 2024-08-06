class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int x = num,lastdigit;
        while(num > 0)
        {
            lastdigit = num % 10;
            if(x % lastdigit == 0)
            {
                cnt++;
            }
            num = num / 10;
        }
        return cnt;
    }
};
