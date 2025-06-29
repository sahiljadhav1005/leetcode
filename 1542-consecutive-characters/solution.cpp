class Solution {
public:
    int maxPower(string s) {

        // method 1

        // int count = 0;
        // int i = 0;
        // int max1 = 0;

        // while (i < s.size()) {
        //     char current = s[i];
        //     count = 0;

        //     while (i < s.size() && s[i] == current) {
        //         count++;
        //         i++;
        //     }

        //     max1 = max(count, max1);
        // }

        // return max1;

        // method 2

        int count = 1;
        int max1 = 1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            max1 = max(max1, count);
        }

        return max1;

        // method 3 : no use

        // unordered_map<char, int> freq;

        // for (auto c : s) {
        //     freq[c]++;
        // }

        // int max1 = 0;

        // for (auto it : freq) 
        // {
        //     max1 = max(max1, it.second);
        // }
        // return max1;
    }
};
