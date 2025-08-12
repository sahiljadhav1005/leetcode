class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int, int> lastSeen; // value -> last index seen
        
        for (int i = 0; i < nums.size(); i++) 
        {
            if (lastSeen.count(nums[i])) 
            {
                // Check distance from last occurrence
                if (i - lastSeen[nums[i]] <= k) 
                {
                    return true;
                }
            }
            // Update last seen index of this value
            lastSeen[nums[i]] = i;
        }
        
        return false;
    }
};
