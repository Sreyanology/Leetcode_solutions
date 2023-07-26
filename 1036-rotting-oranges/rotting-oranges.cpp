class Solution {
    int bfs(vector<vector<int>>& grid, vector<vector<int>>& vis)
    {
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int, int>>q;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == 2)
                 q.push({i, j});
            }
        }
        int count = 0;
        while(!q.empty())
        {
            count++;
            int k = q.size();
            while(k--){
                pair<int, int>cell = q.front();
                int x = cell.first;
                int y = cell.second;
                vis[x][y] = 1;
                q.pop();
                int r[] = {-1, 0, 1, 0};
                int c[] = {0, -1, 0, 1};
                for(int i=0; i<4; i++)
                {
                    if((x+r[i])<row && (x+r[i])>=0 && grid[x+r[i]][y] == 1 && vis[x+r[i]][y]==0)
                    {
                        grid[x+r[i]][y] = 2;
                        vis[x+r[i]][y] = 1;
                        q.push({x+r[i], y});
                    }
                    if((y+c[i])<col && (y+c[i])>=0 && grid[x][y+c[i]] == 1 && vis[x][y+c[i]] == 0)
                    {
                        grid[x][y+c[i]] = 2;
                        vis[x][y+c[i]] = 1;
                        q.push({x, y+c[i]});
                    }
                }
            }
        }
        return count;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>vis(row, vector<int>(col, 0));
        int count = bfs(grid, vis);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == 1)
                 return -1;
            }
        }

        return (count==0)? 0 : count-1;
    }
};