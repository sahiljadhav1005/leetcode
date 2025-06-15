class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // int max = INT_MIN,k = 0;

        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] > max)
        //     {
        //         max = nums[i];
        //         k = i;
        //     }
        // }
        // sort(nums.begin(),nums.end());

        // if((nums[nums.size()-2]) * 2 <= max)
        // {
        //     return k;
        // }
        
        // return -1;

        vector<int> num = nums;
        sort(num.begin() , num.end(), greater<int>());

        if(num[0] >= num[1] * 2)
        {
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(nums[i] == num[0])
                {
                    return i;
                }
            }
        }

        return -1;

        // int maxVal = -1, secondMax = -1, index = -1;

        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] > maxVal) {
        //         secondMax = maxVal;
        //         maxVal = nums[i];
        //         index = i;
        //     } else if (nums[i] > secondMax) {
        //         secondMax = nums[i];
        //     }
        // }

        // if (maxVal >= 2 * secondMax) return index;
        // return -1;
    }
};
