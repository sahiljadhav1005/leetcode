class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        // Go through every cell in the grid
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] == 1) {  
                    // land cell
                    
                    perimeter += 4; // add 4 sides
                    
                    // if land is above, subtract 2
                    if(i > 0 && grid[i-1][j] == 1) 
                    {
                        perimeter -= 2;
                    }

                    // if land is to the left, subtract 2
                    if(j > 0 && grid[i][j-1] == 1) 
                    {
                        perimeter -= 2;
                    }
                }
            }
        }

        return perimeter;
    }
};
