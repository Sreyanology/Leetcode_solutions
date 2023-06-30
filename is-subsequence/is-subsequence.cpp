class Solution {
public:
    bool isSubsequence(string s, string t) {
        string newstr = "";
        int l = s.length();
        int check = -1;
        int i=0;
        while(i<l)
        {
            for(int j=0; j<t.length(); j++)
            {
                if(s[i] == t[j] && j>check)
                {
                    check = j;
                    newstr += t[j];
                    break; 
                }
            }
            if(newstr.length()!=(i+1))
             return false;
            i++;
        }
        return true;
    }
};