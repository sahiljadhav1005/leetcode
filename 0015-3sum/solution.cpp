class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //     vector<vector<int>> arr;
    //     for(int i = 0 ; i < nums.size() - 2 ; i++) 
    //     {
    //         for(int j = i + 1 ; j < nums.size() - 1 ; j++)
    //         { 
    //             for(int k = j + 1 ; k < nums.size() ; k++) 
    //             {
    //                 if(nums[i] + nums[j] + nums[k] == 0) 
    //                 {
    //                     vector<int> triplet = {nums[i], nums[j], nums[k]};
    //                     sort(triplet.begin(), triplet.end());
    //                     arr.push_back(triplet);
    //                 }
    //             }
    //         }
    //     }

    //     sort(arr.begin(), arr.end());
    //     arr.erase(unique(arr.begin(), arr.end()), arr.end());

    //     return arr;
    
    sort(nums.begin(),nums.end());
    vector<vector<int>> arr;

    for(int i = 0 ; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i+1 , right = nums.size()-1;
        while(left < right)
        {
        int sum = nums[i] + nums[left] + nums[right];
        if(sum == 0)
        {
            arr.push_back({nums[i], nums[left], nums[right]});

            while (left < right && nums[left] == nums[left + 1]) left++;
            while (left < right && nums[right] == nums[right - 1]) right--;
            
            left++;
            right--;
        }
        else if(sum < 0)
        {
            left++;
        }
        else
        {
            right--;
        }
        }
    }
        return arr;
    }
};
