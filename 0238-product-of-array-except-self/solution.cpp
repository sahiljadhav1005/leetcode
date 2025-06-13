class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int m = 1,n = 1;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     m = m * nums[i] ;
        //     if(nums[i] == 0)
        //     {
        //         continue;
        //     }
        //     n = n * nums[i] ;   
        // }

        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] == 0)
        //     {
        //         nums[i] = n;
        //     }
        //     else
        //     {
        //         nums[i] = m / nums[i];
        //     }
        // }

        // return nums;

        int totalProduct = 1;
        int zeroCount = 0;

        for (int num : nums) {
            if (num == 0)
                zeroCount++;
            else
                totalProduct *= num;
        }

        vector<int> result(nums.size(), 0);

        if (zeroCount > 1)
            return result; // All products will be zero

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount == 0)
                result[i] = totalProduct / nums[i];
            else if (nums[i] == 0)
                result[i] = totalProduct; // Only zero index gets product
        }

        return result;
    }
};
