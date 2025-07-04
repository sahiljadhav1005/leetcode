class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // traspose first

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // reverse the row 

        for(int i = 0 ; i < n ; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

        // if we want to rotate the matrix with then do 90 rotaion 2 , 3 , 4 times
        // 90 * 2 = 180
        // 90 * 3 = 270

        // rotate(matrix);
    }
};
