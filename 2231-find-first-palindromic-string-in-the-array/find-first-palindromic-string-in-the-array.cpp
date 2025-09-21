class Solution {
public:

    // method 1 

    // string firstPalindrome(vector<string>& words) {
    //     for (string word : words) 
    //     {
    //         string rev = word;
    //         reverse(rev.begin(), rev.end());  // reverse in place
    //         if (rev == word) 
    //         {
    //             return word;
    //         }
    //     }
    //     return "";  
    // }

    // method 2 

    bool isPalindrome(const string& s) 
    {
        int l = 0, r = s.size() - 1;
        while (l < r) 
        {
            if (s[l] != s[r])
            {
                return false;
            } 
            l++;
            r--;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (string& word : words) 
        {
            if (isPalindrome(word)) 
            {
                return word;
            }
        }
        return "";
    }
};