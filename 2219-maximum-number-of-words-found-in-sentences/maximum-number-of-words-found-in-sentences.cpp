class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // method 1

        // int max1 = 0;
        // for (int i = 0; i < sentences.size(); i++) 
        // {
        //     stringstream ss(sentences[i]);
        //     int  count = 0 ;
        //     string word;
        //     while (ss >> word) 
        //     {
        //         count++;
        //     }

        //     max1 = max(count, max1);
        // }

        // return max1;

        // method 2

        int max1 = 0;

        for (string s : sentences) 
        {
            int count = 1; // at least 1 word

            for (char c : s) 
            {
                if (c == ' ') count++;
            }

            max1 = max(max1, count);
        }

        return max1;
    }
};