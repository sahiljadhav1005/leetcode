// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& v) {
//         if (v.empty()) return "";
        
//         // Find the shortest string in the vector
//         string prefix = v[0];
//         for (const string& s : v) {
//             if (s.size() < prefix.size()) {
//                 prefix = s;
//             }
//         }
        
//         // Compare characters at each index for the shortest string
//         for (int i = 0; i < prefix.size(); ++i) {
//             for (const string& s : v) {
//                 if (s[i] != prefix[i]) {
//                     return prefix.substr(0, i);
//                 }
//             }
//         }
        
//         return prefix;
//     }
// };

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        if (v.empty()) return "";

        // Find the shortest string length
        int minLen = INT_MAX;
        for (const string& s : v) {
            minLen = min(minLen, (int)s.size());
        }

        // Compare characters at each index
        for (int i = 0; i < minLen; ++i) {
            char c = v[0][i]; // Character to compare
            for (int j = 1; j < v.size(); ++j) {
                if (v[j][i] != c) {
                    return v[0].substr(0, i);
                }
            }
        }

        return v[0].substr(0, minLen);
    }
};


