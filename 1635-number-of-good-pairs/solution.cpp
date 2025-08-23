class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        int count = 0;

        for(auto i : nums)
        {
            count += freq[i]; 
            freq[i]++;
        }

        return count;

        // int count = 0;
        // for(int i = 0; i < nums.size(); i++) 
        // {
        //     for(int j = i + 1; j < nums.size(); j++) 
        //     {
        //         if(nums[i] == nums[j]) 
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;

    }
};
