class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        // method 1 

        // vector<int> num;

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if (nums[i] % 2 == 0) 
        //     {
        //         num.push_back(nums[i]);
        //     }
        // }

        // for (int i = 0; i < nums.size(); i++) 
        // {
        //     if (nums[i] % 2 != 0) 
        //     {
        //         num.push_back(nums[i]);
        //     }
        // }

        // return num;

        // method 2

        int evenIndex = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] % 2 == 0) 
            {
                swap(nums[i], nums[evenIndex]);
                evenIndex++;
            }
        }
        return nums;
    }
};