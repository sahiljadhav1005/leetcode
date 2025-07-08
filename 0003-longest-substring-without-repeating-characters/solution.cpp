class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int left = 0 ;
        // int right = 0 ; 
        // unordered_map<char,int> inStack;
        // int maxLen = 0;
        // int len = 0;
        // int n = s.size();

        // while(right < n)
        // {
        //     if(inStack[s[right]] != 1)
        //     {
        //         if(inStack[s[right]] >= left)
        //         {
        //             left = inStack[s[right]] + 1;
        //         }
        //     }

        //     len = right - left + 1;
        //     maxLen = max(len , maxLen);

        //     inStack[s[right]] = right;
        //     right++;
        // }

        // return maxLen - 1;

        int left = 0, right = 0;
        unordered_map<char, int> inStack;
        int maxLen = 0;
        int n = s.size();

        while (right < n) 
        {
            if (inStack.count(s[right]) && inStack[s[right]] >= left) \
            {
                left = inStack[s[right]] + 1;
            }

            inStack[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        

        return maxLen;

    }
};
