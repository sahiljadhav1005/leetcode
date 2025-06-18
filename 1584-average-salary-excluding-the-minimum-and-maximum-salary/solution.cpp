class Solution {
public:
    double average(vector<int>& salary) {
        int max = INT_MIN;
        int min = INT_MAX;
        int totalSum = 0;
        int notSum = 0;

        for(auto i : salary)
        {
            if(i > max)
            {
                max = i;
            }
            if(i < min)
            {
                min = i;
            }

            totalSum = totalSum + i; 
        }

        notSum = min + max;
        int median = totalSum - notSum;

        return median / (salary.size() - 2.0);

    }
};
