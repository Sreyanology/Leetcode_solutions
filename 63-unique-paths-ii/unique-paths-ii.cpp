class Solution {
public:
    int paths(int x, int y, vector<vector<int>>& dp, vector<vector<int>>& grid, int row, int col)
    {
        if(grid[x][y] == 1)
         return 0;
        
        if(x == row-1 && y == col -1)
         return 1;

        if(dp[x][y]!= -1) return dp[x][y];

        if(x == row-1 && grid[x][y+1] == 0)
         return dp[x][y] = paths(x, y+1, dp, grid, row, col);
        else if(x == row-1 && grid[x][y+1] == 1)
         return 0;
        
        if(y == col-1 && grid[x+1][y] == 0)
         return dp[x][y] = paths(x+1, y, dp, grid, row, col);
        else if(y == col-1 && grid[x+1][y] == 1)
         return 0;

        //if(x+1<row && grid[x+1][y]!=1 && y+1<col && grid[x][y+1]!=1)
         return dp[x][y] = paths(x+1, y, dp, grid, row, col) + paths(x, y+1, dp, grid, row, col);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        //vector<vector<int>>vis(row, vector<int>(col, 0));
        vector<vector<int>>dp(row, vector<int>(col, -1));

        return paths(0, 0, dp, obstacleGrid, row, col);

    }
};