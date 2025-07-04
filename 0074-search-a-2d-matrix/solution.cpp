class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mid = 0 , value = 0;
        int low = 0; 
        
        int row = matrix.size();
        int col = matrix[0].size();
        int high = row * col - 1;

        while(low <= high)
        {
            mid = ( high + low ) / 2;
            value = matrix[mid/col][mid%col];

            if(value == target)
            {
                return true;
            }
            else if(value < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};
