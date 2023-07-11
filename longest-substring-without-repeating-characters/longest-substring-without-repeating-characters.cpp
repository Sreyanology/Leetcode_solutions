class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int>m;
        int l = s.size();
        int low =  0;
        int maxcount = 0, count = 0;
        for(int i=0; i<l; i++)
        {
            if(m[s[i]] == 0)
             {
                 m[s[i]] = 1;
                 count++;
             }
            else
            {
                maxcount = max(maxcount, count);
                count++;
                while(s[low]!=s[i])
                {
                    m[s[low]] = 0;
                    low++;
                    count--;
                }
                low++;
                //m[s[i]] = 1;
                count--;
            }
        }
        maxcount = max(maxcount, count);
        return maxcount;
    }
};