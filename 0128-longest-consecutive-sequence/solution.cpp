class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for (int num : s) 
        {
            // only check for starting points
            if (!s.count(num - 1)) 
            {
                int currentNum = num;
                int streak = 1;

                while (s.count(currentNum + 1)) 
                {
                    currentNum++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};
