class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0, digSum = 0;

        for (int num : nums) 
        {
            eleSum += num;

            int temp = num;
            while (temp > 0) 
            {
                digSum += temp % 10;
                temp /= 10;
            }
        }

        return abs(eleSum - digSum);
    }
};