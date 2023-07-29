class Solution {
    int mincost(vector<int>& cost, int start, vector<int>& dp)
    {
        if(start>=cost.size())
         return 0;
        if(dp[start]!= -1) return dp[start];
        return dp[start] = cost[start] + min(mincost(cost, start+1, dp), mincost(cost, start+2, dp));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1, -1);
        return min(mincost(cost, 0, dp), mincost(cost, 1, dp));
    }
};