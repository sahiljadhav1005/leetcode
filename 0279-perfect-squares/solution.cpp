class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1 , INT_MAX);
        dp[0] = 0;

        vector<int> sqrs;

        for(int i = 1 ; i * i <= n ; i++)
        {
            sqrs.push_back(i * i);
        }

        for(int i = 1 ; i <= n ; i++)
        {
            for(auto sqr : sqrs)
            {
                if (i - sqr >= 0) 
                {
                    dp[i] = min(dp[i] , dp[i - sqr] + 1);
                }
            }
        }

        return dp[n];
    }
};
