class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        // int k , sum , sum1 ;
        // for(int i = 1 ; i < nums.size() ; i++)
        // {
        //     if(nums[i - 1] < nums[i])
        //     {
        //         k++;
        //         sum = nums[i - 1];
        //         sum = sum + nums[i];
        //     }
        //         sum1 = sum;
        //     else
        //     {
        //         m = sum1;
        //         if(sum > m)
        //         sum = 0;
        //         k = 0;
        //     }
        // }
        // return sum;

        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];  // Continue the ascending sum
            } else {
                currentSum = nums[i];  // Start a new subarray
            }
            maxSum = max(maxSum, currentSum);  // Track the max sum
        }

        return maxSum;
    }
};
