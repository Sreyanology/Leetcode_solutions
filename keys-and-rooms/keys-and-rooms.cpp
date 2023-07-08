class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>vis(n, 0);
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int room = q.front();
            vis[room] = 1;
            q.pop();
            for(int i=0; i<rooms[room].size(); i++)
            {
                if(vis[rooms[room][i]] == 0)
                 q.push(rooms[room][i]);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(vis[i] == 0)
             return false;
        }

        return true;
    }
};