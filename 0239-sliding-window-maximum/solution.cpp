class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // method 1 for small size of vector

        // int max1 = 0;
        // int ele = 0;
        // vector<int> res;
        // for(int i = 0 ; i <= nums.size() - k; i++)
        // {
        //     max1 = nums[i];
        //     for(int j = i+1 ; j < i + k ; j++)
        //     {
        //         ele = nums[j];
        //         max1 = max(max1,ele);
        //     }
        //     res.push_back(max1);
        // }
        // return res;

        // method 2 deque optimised method 

        deque<int> d;
        vector<int> res;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(!d.empty() && d.front() == (i - k))
            {
                d.pop_front();
            }

            while(!d.empty() && nums[d.back()] <= nums[i])
            {
                d.pop_back();
            }

            d.push_back(i);

            if(i >= k - 1)
            {
                res.push_back(nums[d.front()]);
            }
        }

        return res;
    }
};
