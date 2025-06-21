class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin() , nums.end());

        // int left = 0; 
        // int right = 1;

        // while(right < nums.size())
        // {
        //     if(nums[left] == nums[right])
        //     {
        //         return nums[left];
        //     }
        //     else
        //     {
        //         left++;
        //         right++;
        //     }
        // }

        // return 0;

        int slow = nums[0];
        int fast = nums[0];

        do 
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];
        while (slow != fast) 
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;

    }
};
