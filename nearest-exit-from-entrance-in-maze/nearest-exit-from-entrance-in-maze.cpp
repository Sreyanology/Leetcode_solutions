class Solution {
    int bfs(vector<vector<char>>& maze, int row, int col, vector<vector<int>>& vis) {
        int m = maze.size();
        int n = maze[0].size();
        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, 1, 0, -1};
        queue<vector<int>> q;
        q.push({row, col, 0});
        vis[row][col] = 1;
        while (!q.empty()) {
            vector<int> v = q.front();
            q.pop();
            int rowbfs = v[0];
            int colbfs = v[1];
            int dist = v[2];
            if (rowbfs == 0 || rowbfs == m - 1 || colbfs == 0 || colbfs == n - 1) {
                if (rowbfs != row || colbfs != col)
                    return dist;
            }
            for (int i = 0; i < 4; i++) {
                int rownew = rowbfs + delrow[i];
                int colnew = colbfs + delcol[i];
                if (rownew >= 0 && rownew < m && colnew >= 0 && colnew < n && maze[rownew][colnew] == '.' && vis[rownew][colnew] == 0) {
                    q.push({rownew, colnew, dist + 1});
                    vis[rownew][colnew] = 1;
                }
            }
        }
        return -1;
    }
    
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int row = entrance[0];
        int col = entrance[1];
        int m = maze.size();
        int n = maze[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        return bfs(maze, row, col, vis);
    }
};
