class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                // If it's a closing bracket
                if (st.empty()) return false; // No matching opening bracket
                char top = st.top();
                if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                    // Mismatched opening bracket
                    return false;
                }
                st.pop(); // Matching opening bracket found, pop from stack
            }
        }
        // If the stack is empty, all brackets are closed properly
        return st.empty();
    }
};


