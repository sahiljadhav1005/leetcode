class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // hashing 

        // unordered_map<int,int> res;
        // int n = nums.size() ;

        // for(auto i : nums)
        // {
        //     res[i]++;
        // }

        // for(auto [num , count] : res)
        // {
        //     if(count > n / 2)
        //     {
        //         return num;
        //     }
        // }

        // return 0;
        
        // moore algo 

        int ans = 0;
        int freq = 0;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(freq == 0)
            {
                ans = nums[i];
            }
            if(ans == nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }

        return ans;
    }
};
