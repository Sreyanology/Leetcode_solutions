class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        vector<int>arr;
        int n = nums.size();
        for(auto it: nums) arr.push_back(abs(it));
        sort(arr.begin(), arr.end());

        long long count = 0;
        int r = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(r<i) r = i;
            while(r+1<n && arr[r+1]<=2*arr[i]) r++;
            count+=(r-i);
        }
        return count;
    }
};