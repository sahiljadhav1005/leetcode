class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // int r = 0, sum = 0,x;
        // vector<int> result;
        // for(int i = 0; i < num.size(); i++)
        // {
        //     r = r  * 10 + num[i];
        // }

        // sum = r + k;

        // while(sum != 0)
        // {
        //     x = sum % 10;
        //     // result.push_back(x);
        //     result.insert(result.begin(),x);
        //     sum = sum / 10;
        // }

        // return result;

        int i = num.size() - 1;
        vector<int> result;

        while (i >= 0 || k > 0) {
            if (i >= 0)
                k += num[i--];  // add digit to k

            result.push_back(k % 10);  // add last digit
            k /= 10;  // move to next digit (carry)
        }

        // Instead of insert at front, we reverse once at the end
        reverse(result.begin(), result.end());
        return result;

    }
};
