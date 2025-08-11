class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        // int big = 0;
        // int max1 = 0 ;
        // int min1 = 0;
        // for(int i = 1 ; i < arr.size() ;i++)
        // {
        //     if(arr[i] > arr[i - 1])
        //     {
        //         max1 = 1;
        //         if(big == 1)
        //         {
        //             return false;
        //         }
        //     }
        //     else if(arr[i] < arr[i - 1])
        //     {
        //         min1 = 1;
        //         big = 1;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }

        // if(max1 != 1 || min1 != 1)
        // {
        //     return false;
        // }

        // return true;

        int n = arr.size();
        if (n < 3) return false; // Must have at least 3 elements

        int i = 0;

        // Step 1: Walk up
        while (i + 1 < n && arr[i] < arr[i + 1]) 
        {
            i++;
        }

        // Peak can't be first or last
        if (i == 0 || i == n - 1) 
        {
            return false;
        }

        // Step 2: Walk down
        while (i + 1 < n && arr[i] > arr[i + 1]) 
        {
            i++;
        }

        // Must reach the end
        return i == n - 1;
    }
};
