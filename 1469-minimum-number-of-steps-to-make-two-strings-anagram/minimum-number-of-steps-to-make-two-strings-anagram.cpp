class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int>ms;
        map<char, int>mt;
        int l = s.length();
        
        for(int i=0; i<l; i++)
        {
            ms[s[i]]++;
            mt[t[i]]++;
        }
        int changes = 0;
        for(auto it : ms)
        {
            char c = it.first;
            int count = it.second;
            if(ms[c] > mt[c])
             changes += count - mt[c];
        }

        return changes;
    }
};