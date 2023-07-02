class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>alt;
        int n = gain.size();
        alt.resize(gain.size()+1);
        alt[0] = 0;
        for(int i=0; i<gain.size(); i++)
        {
            alt[i+1] = alt[i]+gain[i];
        }
        sort(alt.begin(), alt.end());
        return alt[n];
    }
};