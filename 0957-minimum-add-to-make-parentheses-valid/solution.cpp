class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;   // count of unmatched '('
        int additions = 0; // number of insertions needed

        for (char c : s) 
        {
            if (c == '(') 
            {
                balance++;
            } 
            else 
            { // c == ')'
                if (balance > 0) 
                {
                    balance--; // matched with '('
                } 
                else 
                {
                    additions++; // need to add '('
                }
            }
        }

        return additions + balance;
    }
};
