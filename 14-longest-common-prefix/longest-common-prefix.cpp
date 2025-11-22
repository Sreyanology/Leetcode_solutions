class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int min_len = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(strs[i].length() < min_len)
             min_len = strs[i].length();
        }
        string ans  ="";
        for(int i=0; i<min_len; i++)
        {
            bool flag = true;
            char c = strs[0][i];
            for(int j=1; j<n; j++)
            {
                if(c != strs[j][i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
             ans = ans + c;
            else
             break;
        }
        return ans;
    }
};