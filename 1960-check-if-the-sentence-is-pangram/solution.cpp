class Solution {
public:
    bool checkIfPangram(string sentence) {
        // unordered_set<char> letters;
        // for (char c : sentence) 
        // {
        //     if (isalpha(c)) 
        //     {
        //         letters.insert(c);
        //     }
        // }
        // return letters.size() == 26;


        bool seen[26] = {false};
        int count = 0;

        for (char c : sentence) 
        {
            int idx = c - 'a';
            if (!seen[idx]) 
            {
                seen[idx] = true;
                count++;
                if (count == 26)
                {
                    return true; // early exit
                }
            }
        }

        return false;
    }
};
