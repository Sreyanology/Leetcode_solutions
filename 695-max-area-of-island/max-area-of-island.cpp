class Solution {
public:
    int AreaOfIsland(int i, int j, vector<vector<int>>& grid)
    {
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j] == 1)
        {
            grid[i][j] = 0;
            return 1 + AreaOfIsland(i-1, j, grid) + AreaOfIsland(i+1, j, grid) + AreaOfIsland(i, j-1, grid) + AreaOfIsland(i, j+1, grid);
        }
        
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxArea = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == 1)
                 maxArea = max(maxArea, AreaOfIsland(i, j, grid));
            }
        }
        return maxArea;
    }
};