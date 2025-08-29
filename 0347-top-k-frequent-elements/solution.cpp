class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for (int n : nums) 
        {
            freq[n]++;
        }

        // Create buckets where index = frequency
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto &p : freq) 
        {
            buckets[p.second].push_back(p.first);
        }

        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; --i)
        {
            for (int n : buckets[i]) 
            {
                result.push_back(n);
                if (result.size() == k)
                {
                    break;
                }
            }
        }

        return result;
    }
};
