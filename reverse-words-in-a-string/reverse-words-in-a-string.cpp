class Solution {
public:
    string reverseWords(string s) {
        int l = s.length();
        stack<char>alpha;
        string ans = "";
        for(int i=l-1; i>=0; i--)
        {
            if(s[i]!= ' ')
                alpha.push(s[i]);
            else
            {
                while(!alpha.empty())
                {
                    ans = ans + alpha.top();
                    alpha.pop();
                }
                if(ans.length()>0 && ans[ans.length()-1]!=' ')
                ans = ans + ' ';
            }
        }
        while(!alpha.empty())
        {
            ans = ans + alpha.top();
            alpha.pop();
        }
        if(ans[ans.length()-1] == ' ')
         ans.pop_back();
        return ans;
    }
};