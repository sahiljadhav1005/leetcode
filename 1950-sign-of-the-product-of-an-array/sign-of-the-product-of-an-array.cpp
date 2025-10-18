class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for (auto n : nums) 
        {
            if (n == 0)
            {
                return 0;       // Product becomes zero
            }
            else if (n < 0)
            {
                sign = -sign;   // Flip sign for each negative number
            }
        }
        return sign;  
    }
};