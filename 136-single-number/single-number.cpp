class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int> freq;

        // for(auto i : nums)
        // {
        //     freq[i]++;
        // }

        // for(auto [i,j] : freq)
        // {
        //     if(j == 1)
        //     {
        //         return i;
        //     }
        // }

        // return -1;

        int ans = 0;
        for (int num : nums)
        {
            ans ^= num;  // cancel out duplicates
        }
        
        return ans;
    }
};