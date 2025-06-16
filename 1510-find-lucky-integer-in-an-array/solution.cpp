class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> res;

        for(auto i : arr)
        {
            res[i]++;
        }

        int ans = -1;
        for(auto [num,count] : res)
        {
            if(num == count)
            {
                ans = max(num,ans);
            }
        }
        return ans;
    }
};
