class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // int i = digits.size() - 1;
        // int carry = 1;
        // vector<int> res;

        // while (i >= 0 || carry > 0) {
        //     if (i >= 0) {
        //         carry += digits[i];
        //         i--;
        //     }

        //     res.push_back(carry % 10);
        //     carry = carry / 10;
        // }

        // reverse(res.begin(), res.end());
        // return res;

         int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // no carry, return early
            }
            digits[i] = 0; // carry over
        }

        // If we're here, all digits were 9 (e.g., 999 → 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
