class Solution {
public:
    // void getSubsets(vector<int> nums , vector<int> &ans , int k , vector<vector<int>> &res)
    // {
    //     if(k == nums.size())
    //     {
    //         res.push_back({ans});
    //         return;
    //     }
    //         // Include nums[k]
    //     ans.push_back(nums[k]);
    //     getSubsets(nums, ans, k + 1, res);

    //         // Exclude nums[k]
    //     ans.pop_back();
    //     getSubsets(nums, ans, k + 1, res);
    // }

    // vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<vector<int>> res;
    //     vector<int> ans;

    //     getSubsets(nums , ans , 0 , res);

    //     return res;
    // }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        int total = 1 << n; // 2^n subsets

        cout << "All subsets are:\n";
        for (int mask = 0; mask < total; mask++) 
        {
            vector<int> subset;
            for (int i = 0; i < n; i++) 
            {
                if (mask & (1 << i)) 
                {
                    subset.push_back(nums[i]);
                }
            }
            res.push_back(subset);
        }
        return res;
    }
};