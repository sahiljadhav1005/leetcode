class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int major=nums[0], count = 1;
        for(int i=1; i<nums.size();i++){
            if(count==0){
                count++;
                major=nums[i];
            }else if(major==nums[i]){
                count++;
            }else count--;
            
        }
        return major;
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> m;
        
//         for(int i = 0; i < n; i++){
//             m[nums[i]]++;
//         }
//         n = n/2;
//         for(auto x: m){
//             if(x.second > n){
//                 return x.first;
//             }
//         }
//         return 0;
//     }
// };
