class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        for (int c : candies) 
        {
            maxCandy = max(maxCandy, c);
        }

        vector<bool> result;
        for (int c : candies) 
        {
            result.push_back(c + extraCandies >= maxCandy);
        }

        return result;
    }
};