// class Solution {
// public:
//     int romanToInt(string s) {
//         unordered_map<char, int> romanValues = {
//             {'I', 1},
//             {'V', 5},
//             {'X', 10},
//             {'L', 50},
//             {'C', 100},
//             {'D', 500},
//             {'M', 1000}
//         };

//         int result = 0;
//         int prevValue = 0;

//         for (int i = s.size() - 1; i >= 0; --i) {
//             int currValue = romanValues[s[i]];
//             if (currValue < prevValue) {
//                 result -= currValue;
//             } else {
//                 result += currValue;
//             }
//             prevValue = currValue;
//         }

//         return result;
//     }
// };

// class Solution {
// public:
//     int romanToInt(string s) {
//         int result = 0;
//         int prevValue = 0;

//         for (int i = s.size() - 1; i >= 0; --i) {
//             int currValue = getValue(s[i]);
//             if (currValue < prevValue) {
//                 result -= currValue;
//             } else {
//                 result += currValue;
//             }
//             prevValue = currValue;
//         }

//         return result;
//     }

// private:
//     int getValue(char c) {
//         switch (c) {
//             case 'I': return 1;
//             case 'V': return 5;
//             case 'X': return 10;
//             case 'L': return 50;
//             case 'C': return 100;
//             case 'D': return 500;
//             case 'M': return 1000;
//             default: return 0; // Invalid character
//         }
//     }
// };

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int prevValue = 0;

        for (int i = s.size() - 1; i >= 0; --i) {
            int currValue = getValue(s[i]);
            if (currValue < prevValue) {
                result -= currValue;
            } else {
                result += currValue;
            }
            prevValue = currValue;
        }

        return result;
    }

private:
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

