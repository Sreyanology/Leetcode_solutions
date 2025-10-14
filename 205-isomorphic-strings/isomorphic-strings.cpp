class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!= t.length())
         return false;
        int l = s.length();
        unordered_map<char, char> cmap;
        unordered_map<char, char> cmap1;
        for(int i=0; i<l; i++)
        {
            auto it = cmap.find(s[i]);
            auto it1 = cmap1.find(t[i]);
            if(it == cmap.end() && it1 == cmap1.end())
            {
                cmap[s[i]] = t[i];
                cmap1[t[i]] = s[i];
            }
            else if(cmap[s[i]] != t[i] || cmap1[t[i]]!= s[i])
             return false;
            else
             continue;
        }
        return true;
    }
};