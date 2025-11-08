class Solution {
public:
    void traverseIsland(int i, int j, vector<vector<char>>& grid,vector<vector<int>>& visited)
    {
        visited[i][j] = 1;
        grid[i][j] = '0';
        if(i-1>=0 && grid[i-1][j] == '1')
         traverseIsland(i-1, j, grid, visited);
        if(j-1>=0 && grid[i][j-1] == '1')
         traverseIsland(i, j-1, grid, visited);
        if(i+1<grid.size() && grid[i+1][j] == '1')
         traverseIsland(i+1, j, grid, visited);
        if(j+1<grid[i].size() && grid[i][j+1] == '1')
         traverseIsland(i, j+1, grid, visited);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visited(m, vector<int>(n, 0));
        int ans = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!visited[i][j] && grid[i][j] == '1')
                {
                    ans++;
                    traverseIsland(i, j, grid, visited);
                }
            }
        }
        return ans;
    }
};