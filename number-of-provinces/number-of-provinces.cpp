class Solution {
    vector<int>vis;
    void dfs(vector<vector<int>>& isConnected, int city)
    {
        vis[city] = 1;
        for(int i=0; i< isConnected[city].size(); i++)
        {
            if(isConnected[city][i] == 1 && vis[i] == 0)
             dfs(isConnected, i);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vis.resize(n);
        int prov = 0;
        for(int i=0; i<n; i++)
        {
            if(vis[i] == 0)
            { 
                prov++;
                dfs(isConnected, i);
            }
        }
        return prov;

    }
};