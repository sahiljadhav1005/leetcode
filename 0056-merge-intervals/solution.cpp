class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // sort intervals based on start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        for (auto interval : intervals) {
            // If merged is empty OR no overlap
            if (merged.empty() || merged.back()[1] < interval[0]) 
            {
                merged.push_back(interval);
            } 
            else 
            {
                // Overlapping case then merge
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
};
