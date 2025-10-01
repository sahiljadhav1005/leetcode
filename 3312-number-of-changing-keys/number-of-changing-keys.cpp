class Solution {
public:
    int countKeyChanges(string s) {
        char c , d;
        int count = 0;
        for(int i = 1 ; i < s.size() ; i++)
        {
            c = tolower(s[i]);
            d = tolower(s[i-1]);

            if(c != d)
            {
                count++;
            }
        }

        return count;
    }
};