class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max1 = 0;
        for (int i = 0; i < sentences.size(); i++) 
        {
            stringstream ss(sentences[i]);
            int  count = 0 ;
            string word;
            while (ss >> word) 
            {
                count++;
            }

            max1 = max(count, max1);
        }

        return max1;
    }
};