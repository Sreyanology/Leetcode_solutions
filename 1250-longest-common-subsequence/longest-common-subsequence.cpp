class Solution {
public:    
    int maxLen(string& s1, string& s2, int n, int m, vector<vector<int>>& dp)
    {
        if (n == 0 || m == 0)
            return 0;
        
        if(dp[n-1][m-1]!= -1) return dp[n-1][m-1];

        if (s1[n - 1] == s2[m - 1])
            return dp[n-1][m-1] = 1 + maxLen(s1, s2, n - 1, m - 1, dp);
        else
            return dp[n-1][m-1] = max(0 + maxLen(s1, s2, n - 0, m - 1, dp), 0 + maxLen(s1, s2, n - 1, m - 0, dp));
    }
        
    int longestCommonSubsequence(string s1, string s2) 
    {
        vector<vector<int>>dp(s1.length()+1, vector<int>(s2.length()+1, -1));
        return maxLen(s1, s2, s1.length(), s2.length(), dp);
    }
};