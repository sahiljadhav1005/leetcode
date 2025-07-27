class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> seen;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                for (int k = 0; k < n; k++) 
                {
                    if (i == j || j == k || i == k)
                    {
                        continue;
                    }   

                    int a = digits[i], b = digits[j], c = digits[k];

                    if (a == 0) 
                    {
                        continue; 
                    }              // no leading zero
                    if (c % 2 != 0)
                    { 
                        continue;
                    }          // must be even

                    int num = a * 100 + b * 10 + c;

                    seen.insert(num);
                }
            }
        }
        return seen.size();
    }
};
