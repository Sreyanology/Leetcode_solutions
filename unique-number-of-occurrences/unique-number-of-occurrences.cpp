class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>numfreq;
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            numfreq[arr[i]]++;
        }
        set<int>freqdist;
        for(auto it : numfreq)
         freqdist.insert(it.second);
        if(freqdist.size() == numfreq.size())
         return true;
        else
         return false;
    }
};