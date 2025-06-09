class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> arr;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     for(int j = i+1 ; j < nums.size() ; j++)
        //     {
        //         if(nums[i]+nums[j] == target)
        //         {
        //             arr.push_back(i);
        //             arr.push_back(j);
        //         }
        //     }
        // }
        // return arr;

        unordered_map<int,int> arr;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            int compliment = target - nums[i];

            if(arr.find(compliment) != arr.end())
            {
                return {arr[compliment],i};
            }

            arr[nums[i]] = i;
        }
        return {};
    }
};
