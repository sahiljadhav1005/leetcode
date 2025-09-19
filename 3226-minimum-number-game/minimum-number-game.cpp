class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        //  1 2 3 4  -------->  A       B  ---------> 2 1 4 3 
        //                      1       2
        //                      3       4

        vector<int> res1;
        vector<int> res2;
        vector<int> res;
        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i % 2 == 1)
            {
                res1.push_back(nums[i]);
            }
            else
            {
                res2.push_back(nums[i]);
            }
        }

        for(int i = 0 ; i < res1.size() && i < res2.size() ; i++)
        {
            res.push_back(res1[i]);
            res.push_back(res2[i]);
        }

        if (res1.size() > res2.size()) 
        {
            res.push_back(res1.back());
        } 
        else if (res2.size() > res1.size()) 
        {
            res.push_back(res2.back());
        }

        return res;
    }
};