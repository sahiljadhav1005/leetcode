class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size() ;
        int a = 0 ;
        int index = 0;

        while(n != 1)
        {
            index = 0;
            for(int i = 1 ; i < n ; i++)
            {
                a = (nums[i] + nums[i-1]) % 10; 
                nums[index] = a;
                index++;
            }

            n--;
        }

        return nums[0];
    }
};