class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int low = 0;
        int count = 0;
        vector<int> res;

        for(auto i : nums)
        {
            if(i == target)
            {
                count++;
            }
            if(i < target)
            {
                low++;
            }
        }

        for(int i = 0 ; i < count ; i++)
        {
            res.push_back(low + i);
        }

        return res;
    }
};
