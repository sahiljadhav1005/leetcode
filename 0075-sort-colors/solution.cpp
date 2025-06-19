class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int left = 0;
        // int right = nums.size() - 1;
        // int temp;

        // while(left < right)
        // {
        //     if(nums[left] > nums[right])
        //     {
        //         temp = nums[left];
        //         nums[left] = nums[right];
        //         nums[right] = temp;
        //     }
        //     right = right - 1; 
        // }

        int low = 0 , high = nums.size() - 1;
        int mid = 0;

        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid] , nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid] , nums[high]);
                high--;
            }
        }

    }
};
