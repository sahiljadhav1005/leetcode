class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If middle element is greater than the rightmost, minimum is in
            // the right half
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            }
            // Else, it might be mid or in the left half
            else {
                right = mid;
            }
        }

        return nums[left];
    }
};
