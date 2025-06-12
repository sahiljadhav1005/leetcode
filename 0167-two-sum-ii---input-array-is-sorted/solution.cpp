class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> arr;
        // for(int i = 0; i < numbers.size(); i++)
        // {
        //     while(numbers[i] < target)
        //     {
        //         if(numbers[i] + numbers[i+1] == target)
        //         {
        //             arr.push_back(i);
        //             arr.push_back(i+1);
        //         }
        //     }
        // }

        // return arr;

        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                return {left+1, right+1};  // Found the indices
            } else if (sum < target) {
                left++;  // Need a larger sum
            } else {
                right--; // Need a smaller sum
            }
        }

        return {};
    }
};
