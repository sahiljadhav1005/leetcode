class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int> evenIdx, oddIdx;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) evenIdx.push_back(i);
            else oddIdx.push_back(i);
        }
        if (abs((int)evenIdx.size() - (int)oddIdx.size()) > 1) return -1;
        auto countSwaps = [&](vector<int>& idxList, int startPos) {
            int swaps = 0;
            for (int i = 0; i < idxList.size(); i++) {
                swaps += abs(idxList[i] - (startPos + 2 * i));
            }
            return swaps;
        };
        int ans = INT_MAX;
        if (evenIdx.size() >= oddIdx.size()) ans = min(ans, countSwaps(evenIdx, 0));
        if (oddIdx.size() >= evenIdx.size()) ans = min(ans, countSwaps(oddIdx, 0));
        return ans;
    }
};
