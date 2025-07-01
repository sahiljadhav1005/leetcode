class Solution {
public:
    bool makeEqual(vector<string>& words) {

        // method 1 using hash map

        // unordered_map<char,int> freq;

        // for(auto s : words)
        // {
        //     for(auto i : s)
        //     {
        //         freq[i]++;
        //     }
        // }

        // int k = words.size();

        // for(auto [c,n] : freq)
        // {
        //     if(n % k != 0)
        //     {
        //         return false;
        //     }
        // }

        // return true;

        // method 2 using vector 

         vector<int> freq(26, 0);  

        for (string& word : words) 
        {
            for (char c : word) 
            {
                freq[c - 'a']++;
            }
        }

        int n = words.size();
       
        for (int count : freq) 
        {
            if (count % n != 0) 
            {
                return false;
            }
        }

        return true;
    }
};
