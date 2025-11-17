class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // int max1 = 0;
        // for(int i : nums)
        // {
        //     if(i > max1)
        //     {
        //         max1 = i;
        //     }
        // }

        // unordered_map<int,int> res(max1 , 0);
        
        // for(int i : nums)
        // {
        //     res[i] = 1;
        // }

        // vector<int> ans;

        // for(auto i : res)
        // {
        //     if(i.second == 0)
        //     {
        //         ans.push_back(i.first);
        //     }
        // }

        // return ans;

        int n = nums.size();
        vector<int> freq(n + 1, 0);   // frequency array

        // Count how many times each number appears
        for(int x : nums) {
            freq[x]++;
        }

        vector<int> ans;

        // If any number from 1 to n has freq = 0 → missing
        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};