class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length = 2*min(word1.length(), word2.length());
        string ans;
        ans+=word1[0];
        int w1=1, w2=0;
        for(int i=1; i<length; i++)
        {
            if(i%2 == 0)
             ans+=word1[w1++];
            else
             ans+=word2[w2++];
        }
        if(word1.length()> word2.length())
        {
            for(int i=w1; i<word1.length(); i++)
             ans+=word1[i];
        }
        else if(word2.length() > word1.length())
        {
            for(int i=w2; i<word2.length(); i++)
             ans+=word2[i];
        }

        return ans;
    }
};