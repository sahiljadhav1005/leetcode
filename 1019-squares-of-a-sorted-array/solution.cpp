class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     nums[i] = nums[i] * nums[i];
        // }

        // sort(nums.begin(),nums.end());

        // return nums;

        int n = nums.size() ;
        int left = 0 , right = n - 1;
        int pos = n - 1;
        vector<int> result(n);
        while(left <= right)
        {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if(leftsq > rightsq)
            {
                result[pos] = leftsq;
                pos--;
                left++;
            }
            else
            {
                result[pos] = rightsq;
                pos--;
                right--;
            }
        }

        return result;
    }
};
