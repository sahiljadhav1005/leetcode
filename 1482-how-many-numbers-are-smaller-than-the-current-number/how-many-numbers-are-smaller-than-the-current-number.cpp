class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        // method 1

        // vector<int> res;
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = 0; j < nums.size(); j++) {
        //         if (nums[j] < nums[i]) {
        //             count++;
        //         }
        //     }
        //     res.push_back(count);
        //     count = 0;
        // }

        // return res;

        // method 2

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> mp;

        // store the first index of each number in sorted array
        for (int i = 0; i < sorted.size(); i++)
        {
            if (mp.count(sorted[i]) == 0) 
            {
                mp[sorted[i]] = i;
            }
        }

        vector<int> ans;
        for (int x : nums) 
        {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};