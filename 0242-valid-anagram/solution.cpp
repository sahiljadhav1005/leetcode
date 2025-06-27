class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> freq;

        // Count characters in string s
        for (char c : s)
        {
            freq[c]++;
        }

        // Subtract characters from string t
        for (char c : t) 
        {
            freq[c]--;

            if (freq[c] < 0)
            {
                return false;  // t has extra character not in s
            }
        }

        return true;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;
    }
};
