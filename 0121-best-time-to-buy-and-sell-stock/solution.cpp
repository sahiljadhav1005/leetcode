class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int left = 0 ;
        // int right = nums.size() - 1;
        // int max1 = 0 , ans = 0;

        // while(left < right)
        // {
        //     if(nums[left] < nums[right])
        //     {
        //         ans = nums[right] - nums[left];
        //         max1 = max(ans , max1);
        //         right--;
        //     }
        //     else
        //     {
        //         left++;
        //     }
        // }

        // return max1;

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
