class Solution {
public:
    int dpSolution(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp, int x, int y)
    {
        if(i==x && j == y)
         return grid[i][j];
        if(dp[i][j]!=-1)
         return dp[i][j];
        
        if(i == x)
         return dp[i][j] = grid[i][j] + dpSolution(i, j+1, grid, dp, x, y);
        if (j == y)
         return dp[i][j] = grid[i][j] + dpSolution(i+1, j, grid, dp, x, y);
        
        return dp[i][j] = grid[i][j] + min(dpSolution(i, j+1, grid, dp, x, y), dpSolution(i+1, j, grid, dp, x, y));

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp (m, vector<int>(n, -1));
        int ans = dpSolution(0, 0, grid, dp, m-1, n-1);

        return ans;
    }
};