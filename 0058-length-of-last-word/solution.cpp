class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int count = 0;
            if(s.length() == 1)
            {
                return 1;
            }
            else
            {
            for(int i = s.length()-1;i>=0;i--)
            {
                if(s.at(i) != ' ')
                {
                    count++;
                }
                else
                {
                    if(count>0)
                    return count;
                }
            }
            }
        return count;
    }
};
