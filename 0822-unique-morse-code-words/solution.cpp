class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> unique;

        for(auto word : words)
        {
            string code = "";

            for(auto c : word)
            {
                code = code + morse[c - 'a'];
            }

            unique.insert(code);
        }

        return unique.size();
    }
};
