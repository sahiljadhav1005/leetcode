class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string word : words) 
        {
            string rev = word;
            reverse(rev.begin(), rev.end());  // reverse in place
            if (rev == word) 
            {
                return word;
            }
        }
        return "";  
    }
};