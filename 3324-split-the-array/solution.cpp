class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> seen;

        for(auto i : nums)
        {
            seen[i]++;
        }

        for(auto [num,freq] : seen)
        {
            if(freq > 2)
            {
                return false;
            }
        }

        return true;

    }
};
