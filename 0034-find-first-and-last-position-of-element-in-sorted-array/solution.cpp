class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int left = 0 ;
        int right = nums.size() - 1;
        int mid = 0;
        int last = -1 , first = -1;

        while(left <= right)
        {
            mid = left + (right -left) / 2;

            if(nums[mid] == target)
            {
                first = mid;
                right = mid - 1;
            }
            else if(nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        left = 0;
        right = nums.size() - 1;
        mid = 0;

        while(left <= right)
        {
            mid = left + (right - left) / 2;

            if(nums[mid] == target)
            {
                last = mid;
                left = mid + 1;
            }
            else if(nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return{first,last};

        // vector<int> res;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[i] == target)
        //     {
        //         res.push_back(i);
        //     }
        // }

        // if (res.empty())
        // {
        //     return {-1, -1};
        // }

        // return {res.front(), res.back()};

        // int first = -1, last = -1;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == target) {
        //         if (first == -1) first = i;
        //         last = i;
        //     }
        // }
        // return {first, last};

        // int start = 0;
        // int end = nums.size() - 1;
        // int mid = 0;
        // int first = -1 , last = -1; 

        // while(start <= end)
        // {
        //     mid = start + (end - start) / 2 ; 
        //     if(target == nums[mid])
        //     {
        //         first = mid;
        //         end = mid - 1;
        //     }
        //     else if(target > nums[mid])
        //     {
        //         start = mid + 1;
        //     }
        //     else
        //     {
        //         end = mid - 1;
        //     }
        // }

        // start = 0 ;
        // end = nums.size() - 1;

        // while(start <= end)
        // {
        //     mid = start + (end-start) / 2;
        //     if(target == nums[mid])
        //     {
        //         last = mid;
        //         start = mid + 1;
        //     }
        //     else if(target > nums[mid])
        //     {
        //         start = mid + 1;
        //     }
        //     else
        //     {
        //         end = mid - 1;
        //     }
        // }

        // return {first,last};
    }
};
