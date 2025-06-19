class Solution {
public:
    int maximumCount(vector<int>& nums) {

        // method 1 without binanary search O(N)

        // int countPos = 0;
        // int countNeg = 0;

        // for (int i = 0; i < nums.size(); i++) 
        // {
        //     if (nums[i] > 0)
        //     {
        //         countPos++;
        //     }
        //     else if(nums[i] < 0)
        //     {
        //         countNeg++;
        //     }
        // }

        // return max(countPos, countNeg);

        // method 2 with binary search O(LOG N)

        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        int firstPos = nums.size(), firstNeg = nums.size();

        while(low <= high)
        {
            mid = low + (high - low) / 2;

            if(nums[mid] > 0)
            {
                firstPos = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        low = 0;
        high = nums.size() - 1;
        mid = 0;
        while(low <= high)
        {
            mid = low + (high - low) / 2;

            if(nums[mid] >= 0)
            {
                firstNeg = mid;
                high = mid - 1; 
            }
            else
            {
                low = mid + 1;
            }
        }

        int posNo = nums.size() - firstPos;
        int negNo = firstNeg;

        return max(posNo , negNo);
    }
};
