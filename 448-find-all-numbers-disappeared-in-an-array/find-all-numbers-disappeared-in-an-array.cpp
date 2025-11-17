class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();
        vector<int> freq(n + 1, 0);   // frequency array

        // Count how many times each number appears
        for(int x : nums) 
        {
            freq[x]++;
        }

        vector<int> ans;

        // If any number from 1 to n has freq = 0 → missing
        for(int i = 1; i <= n; i++) 
        {
            if(freq[i] == 0) 
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};