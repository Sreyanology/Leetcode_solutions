class Solution {
public:
    string removeStars(string s) {
        int l = s.length();
        string ans;
        vector<char>ansch;
        for(int i=0; i<l; i++)
        {
            if(s[i] == '*')
             ansch.pop_back();
            else
             ansch.push_back(s[i]);
        }
        for(int i=0; i<ansch.size(); i++)
         ans+=ansch[i];

        return ans;
    }
};