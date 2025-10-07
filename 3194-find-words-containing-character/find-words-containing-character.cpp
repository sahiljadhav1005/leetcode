class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        int count = 0;
        for(auto word : words)
        {
            for(auto c : word)
            {
                if(c == x)
                {
                    res.push_back(count);
                    break;
                }
            }
            count++;
        }

        return res;
    }
};