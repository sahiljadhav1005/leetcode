class Solution {
public:
    bool detectCapitalUse(string word) {
        int capitalCount = 0;

        // Count how many capital letters
        for(char c : word) {
            if(isupper(c)) 
            {
                capitalCount++;
            }
        }

        // Case 1: All letters are capitals
        if(capitalCount == word.size()) 
        {
            return true;
        }

        // Case 2: All letters are lowercase
        if(capitalCount == 0) 
        {
            return true;
        }

        // Case 3: Only first letter is capital
        if(capitalCount == 1 && isupper(word[0]))
        {
            return true;
        }

        return false;
    }
};