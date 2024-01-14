// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums)
//     {
//         int index = 1;
//         int j = 1;
//         for(int i = 1; i < nums.size(); i++)
//         {
//             if(nums[i-1] == nums[i] && j < 2)
//             {
//                 nums[index] = nums[i];
//                 j++;
//                 index++;
//             }
//             else if(nums[i-1] != nums[i])
//             {
//                 nums[index] = nums[i];
//                 j = 1; // Reset the count of duplicates
//                 index++;
//             }
//         }
//         return index;
//     }
// };
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size();
        }

        int index = 2; // Start from the third element
        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i] != nums[index - 2]) {
                nums[index] = nums[i];
                ++index;
            }
        }
        return index;
    }
};

