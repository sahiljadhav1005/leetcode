class Solution {
public:
    string removeDuplicateLetters(string s) {

        // unique letters but not in lexical order

        // unordered_set<char> seen;
        // string result = "";

        // for (char c : s) 
        // {
        //     if (seen.find(c) == seen.end()) 
        //     {
        //         seen.insert(c);
        //         result.push_back(c);
        //     }
        // }

        // return result;

        // unique with lexical order

        unordered_map<char, int> freq;      // Count frequency of each char
        unordered_map<char, bool> inStack;  // To track if a char is in result
        string result = "";

        // Step 1: Count frequencies
        for (char c : s)
        {
            freq[c]++;
        }

        // Step 2: Process each character
        for (char c : s) 
        {
            freq[c]--; // We’re using this occurrence

            // If already in result, skip it
            if (inStack[c])
            {
                continue;
            }

            // Remove bigger chars from result that still appear later
            while (!result.empty() && c < result.back() && freq[result.back()] > 0)
            {
                inStack[result.back()] = false; // Mark popped char as not in result
                result.pop_back();              // Remove from result
            }

            result.push_back(c);      // Add current char to result
            inStack[c] = true;        // Mark as added
        }

        return result;

    }
};
