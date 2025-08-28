class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> res;

        for(auto i : nums)
        {
            freq[i]++;
        }

        int n = nums.size();
        int k = n / 3;

        for(auto [i,j] : freq)
        {
            if(j > k)
            {
                res.push_back(i);
            }   
        }

        return res;
    }
};
