class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0 ;
    int n = grid.size();
    int m = grid[0].size();

    queue<pair<pair<int,int>,int>> Q;

    vector<vector<bool>> visit(n , vector<bool>(m , false));

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(grid[i][j] == 2)
            {
                Q.push({{i,j} , 0});
                visit[i][j] = true;
            }
        }
    }

    while(Q.size() > 0)
    {
        int i = Q.front().first.first;
        int j = Q.front().first.second;
        int time = Q.front().second;
        Q.pop();

        ans = max(ans , time);

        if(i-1 >=0 && grid[i-1][j] == 1 && !visit[i-1][j])
        {
            Q.push({{i-1,j},time+1});
            visit[i-1][j] = true;
            grid[i-1][j] = 2;
        }

        if(i+1 < n && grid[i+1][j] == 1 && !visit[i+1][j])
        {
            Q.push({{i+1,j},time+1});
            visit[i+1][j] = true;
            grid[i+1][j] = 2;

        }

        if(j+1 < m && grid[i][j+1] == 1 && !visit[i][j+1])
        {
            Q.push({{i,j+1},time+1});
            visit[i][j+1] = true;
            grid[i][j+1] = 2;
        }

        if(j-1 >=0 && grid[i][j-1] == 1 && !visit[i][j-1])
        {
            Q.push({{i,j-1},time+1});
            visit[i][j-1] = true;
            grid[i][j-1] = 2;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(grid[i][j] == 1 && !visit[i][j])
            {
                return -1;
            }
        }
    }
    
    return ans;
    }
};