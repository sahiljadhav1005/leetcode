class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        // method 1

    //     int i = 1;

    //     while (i < nums.size() && nums[i - 1] == nums[i]) 
    //     {
    //         i++;
    //     }

    //     if (i == nums.size()) 
    //     {
    //         return true;
    //     }

    //     if(nums[i - 1] < nums[i])
    //     {
    //         while(i < nums.size() && nums[i - 1] <= nums[i])
    //         {
    //             i++;
    //         }
    //     }
    //     else
    //     {
    //         while(i < nums.size() && nums[i - 1] >= nums[i])
    //         {
    //             i++;
    //         }
    //     }

    // return nums.size() == i ;

    // method 2 

    bool increasing = true, decreasing = true;

    for (int i = 1; i < nums.size(); i++) 
    {
        if (nums[i] > nums[i - 1])
        {
            decreasing = false;
        }
        if (nums[i] < nums[i - 1])
        {
            increasing = false;
        }
    }

    return increasing || decreasing;

    }
};
