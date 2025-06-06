class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int k = 0,temp;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] == 0)
        //     {
        //         for(int j = i+1; j < nums.size()-k ; j++)
        //         {
        //             temp = nums[j-1];
        //             nums[j-1] = nums[j];
        //             nums[j] = temp;
        //         }
        //         k++;
        //     }
        // }
        // for(int k = 0;k < nums.size();k++)
        // {
        //     cout<<nums[k];
        // }
        
        int k = 0; // position to place the next non-zero element
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }
        // fill remaining positions with zero
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
