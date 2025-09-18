class Solution {
public:
    void getSubsets(vector<int> nums , vector<int> &ans , int k , vector<vector<int>> &res)
    {
        if(k == nums.size())
        {
            res.push_back({ans});
            return;
        }
            // Include nums[k]
        ans.push_back(nums[k]);
        getSubsets(nums, ans, k + 1, res);

            // Exclude nums[k]
        ans.pop_back();
        getSubsets(nums, ans, k + 1, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;

        getSubsets(nums , ans , 0 , res);

        return res;
    }
};