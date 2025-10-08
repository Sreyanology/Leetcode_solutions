bool compare(string& s, string& t)
    {
        return s.length() < t.length();
    }
class Solution {
public:  
    int maxPalindromesAfterOperations(vector<string>& words) {
        map<char, int>hash;
        int n = words.size();
        for(int i=0; i<n; i++)
        {
            for(auto w: words[i])
             hash[w]++;
        }
        int pairs = 0;
        int odds = 0;
        for(auto x: hash)
        {
            pairs += x.second /2;
            odds += x.second % 2;
        }

        sort(words.begin(), words.end(), compare);
        int ans = 0;
        for(auto word: words)
        {
            int l = word.length();
            if(l/2 <= pairs)
            {
                pairs -= l/2;
                odds -= l%2;
                ans++;
            }
            if(odds < 0)
            {
                odds+=2;
                pairs-=1;
            }
        }

        return ans;
    }
};