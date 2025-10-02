class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // check validity
        if (nums[0] + nums[1] <= nums[2]) 
        {
            return "none";
        }
    
        if (nums[0] == nums[1] && nums[1] == nums[2]) 
        {
            return "equilateral";
        }
        if (nums[0] == nums[1] || nums[1] == nums[2])
        {
            return "isosceles";
        }
        return "scalene";
    }
};
