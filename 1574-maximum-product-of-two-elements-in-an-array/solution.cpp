class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;
        for(auto i : nums)
        {
            if(i > max1)
            {
                max2 = max1;
                max1 = i;
            }
            else if(i > max2)
            {
                max2 = i;
            }
        }
        return (max1 - 1) * (max2 - 1);

        // sort(nums.begin(), nums.end(), greater<int>());  // Sort descending
        // return (nums[0] - 1) * (nums[1] - 1);
    }
};
