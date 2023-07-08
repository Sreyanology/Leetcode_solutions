class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>cols(n);
        vector<vector<int>>rows(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
             cols[i].push_back(grid[j][i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
             rows[i].push_back(grid[i][j]);
        }

        int ans  =0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(rows[i] == cols[j])
                 ans++;
            }
        }

        return ans;
    }
};